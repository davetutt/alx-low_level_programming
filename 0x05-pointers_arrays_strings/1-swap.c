#include "main.h"

/**
 * swap_int-Swaps the values of two integers.
 * @a:First argument to be swapped.
 * @b:Second argument to be swapped.
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;

	*b = p;
}
