#include <stdio.h>
/**
 * main - A program that prints all different combinations of three digits
 *
 * Return: 0 (success)
 */

int main(void)    /*Entry point*/
{
	/*initialization*/
	int digit1;
	int digit2;
	int digit3;

	/*condition*/
	for (digit1 = 0; digit1 < 8; digit1++)
	{
		/*second condition*/
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			/*Third condition*/
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');

				putchar((digit2 % 10) + '0');

				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)

					continue;

				putchar(',');

				putchar(' ');

			}
		}
	}

putchar('\n');

return (0);

}
