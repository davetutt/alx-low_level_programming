#include <stdio.h>

/**
 * main - printing alphabet in reverse order
 *
 * Return: 0 (success)
 */

int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);
}
