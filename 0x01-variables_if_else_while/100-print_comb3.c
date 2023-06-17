#include <stdio.h>

/**
  * main - Prints combination of numbers
  *
  * Return: 0
  */
int main(void)
{
	int s, i;

	for (s = '0'; s <= '9'; s++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (s < i)
			{
				putchar(s);
				putchar(i);

				if (s != '8' || (s == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

