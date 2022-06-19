#include "main.h"

/**
 * times_table - returns the times table upto 9.
 *
 * Return: always zero success.
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9 ; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a * b) > 9)
			{
				_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
				_putchar(' ');
			}
			else
			{
				_putchar((a * b) + '0');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
