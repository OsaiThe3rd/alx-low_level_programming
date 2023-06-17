#include <stdio.h>
/**
 * main - A program to print out all alphabets
 * Return: 0 (success)
 */
int main(void)
{
	int s;

	for (is = 0; s < 10; s++)
	{
		putchar(s);
		if (s < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
