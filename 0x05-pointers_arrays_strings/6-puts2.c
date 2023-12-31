#include "main.h"

/**
 * puts2 - printing one  char out of two of a string
 *
 * @str: input string.
 *
 * Return: 0 (success)
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (count % 2 == 0)
			_putchar(str[count]);

		count++;
	}
}
