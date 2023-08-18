#include "main.h"

/**
 * print_triangle - entry point
 *
 * Description: Prints diagonals
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, column, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
