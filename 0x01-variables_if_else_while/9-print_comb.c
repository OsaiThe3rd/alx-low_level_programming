#include <stdio.h>
/**
 * main - A program to print out all alphabets
 * Return: 0 (success)
 */
int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(s + '0');
		if (s < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
