#include "main.h"
/**
 * print_last_digit - does what the name says.
 * @d: the digit to be inspected.
 *
 * Return: returns the last digit.
 */
int print_last_digit(int d)
{
	int r;

	r =  (d % 10);
	if (r < 0)
		r = -1 * r;
	_putchar(r + '0');
	return (r);
}
