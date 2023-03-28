#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k, a, b, count1, count2, i, n, t;
	scanf_s("%d", &t);

	for (k = 4; k <= t; k = k + 2)
	{
		for (a = 2; a <= k / 2; a++)
		{
			count1 = 0;
			for (i = 2; i <= a - 1; i++)
			{
				if (a % i == 0)
				{
					count1++;

				}
			}
			if (count1 == 0)
			{
				b = k - a;
				count2 = 0;
				for (i = 2; i <= b - 1; i++)
				{
					if (b % i == 0)
					{
						count2++;
						break;
					}
				}
				if (count2 == 0)
				{
					printf("%d=%d+%d\n", k, a, b);
					break;
				}
			}
		}

	}

	return 0;






}