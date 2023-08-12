#include <stdio.h>

/**
 * main - creatiing lower and uppecase letters
 *
 * Return: 0 (success)
 */

int main(void)
{
	char lowercase = 'a';
	char UPPERCASE = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase, lowercase++);
	}

	while (UPPERCASE <= 'Z')
	{
		putchar(UPPERCASE, UPPERCASE++);
	}

	putchar('\n');

	return (0);
}
