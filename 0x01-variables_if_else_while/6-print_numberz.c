#include <stdio.h>

/**
 * main - all digits of base 10 using putchar
 *
 * Return: 0 (successe)
 */

int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar((k % 10) + 'O');

		putchar('\n');
	}

	return (0);
}
