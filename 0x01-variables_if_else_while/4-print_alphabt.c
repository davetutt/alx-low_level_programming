#include <stdio.h>

/**
 * main - Printing of alphabet except 'e' and 'q'
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')

		putchar(ch);
	}

	putchar('\n');

	return (0);

}
