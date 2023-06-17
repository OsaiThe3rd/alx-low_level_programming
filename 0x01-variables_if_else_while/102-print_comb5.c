#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: 0
  */
int main(void)
{
	int c, i, k, j;

	for (c = 69; c <= 81; c++)
	{
		for (i = 69; i <= 81; i++)
		{
			for (k = 69; k <= 81; k++)
			{
				for (j = 69; j <= 81; j++)
				{
					if (((k + j) > (c + i) &&  k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);

					if (c + i + k + j == 324 && c == 81)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

