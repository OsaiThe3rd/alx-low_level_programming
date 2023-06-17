#include <stdio.h>
/**
 * main - Print out all digits
 * Return: 0
 */
int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(s + '0');
	}
	putchar('\n');
	return (0);
}
