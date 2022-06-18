#include "main.h"
/**
 * print_last_digit - does what the name says.
 * @d: the digit to be inspected.
 *
 * Return: returns the last digit.
 */
int print_last_digit(int d)
{
	int result;

	if (d >= 10)
		result = (d % 10);
	else if (d < 10)
		result = d;
	else if (d < 0 && d >= -9)
		result = (-1 * d);
	else if (d >= -10)
		result = (-1 * d) % 10;
	return (result);
}
