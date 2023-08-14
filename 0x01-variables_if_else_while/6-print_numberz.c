#include <stdio.h>

/**
 * main - printing numbers of base 10 using putchar
 *
 * Return: 0 (successe)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + 'O');

	}

	putchar('\n');

	return (0);
}
