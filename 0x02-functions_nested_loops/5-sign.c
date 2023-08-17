#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 *
 * @n - Where the number is printed
 *
 * Return: 0 (if n is zero)
 * 1 (if n is greater than zero)
 * -1 (if n is less than zero)
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}

	else
	{
		_putchar('-');

		return (-1);
	}

}
