#include <stdio.h>

/**
  * main - Prints a hexadecimal string
  * Return: 0
  */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

