#include "main.h"

/**
 * print_to_98 - prints any given no to 98!.
 * @n: The given number.
 */
void print_to_98(int n)
{
	for (; x != 98;)
	{
		if (x > 98)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			x--;
		}
		else if (x < 98 && x >= 10)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			x++;
		}
		else if (x <= 0 || x > 0)
		{
			_putchar(x + '0');
			x++;
		}
		_putchar(',');
		_putchar(' ');
	}
}
