#include <stdio.h>
/**
 * main - A program to print out all alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char s;

	for (s = 'z'; s >= 'a'; s--)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}

