#include <stdio.h>
/**
 * main - alphabet
 * Return: 0
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}

	for (s = 'A'; s <= 'Z'; s++)
	{
		putchar(s);
	}

	putchar('\n');

	return (0);
}
