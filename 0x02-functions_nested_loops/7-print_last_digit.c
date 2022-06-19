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

	result = d % 10;

	if (d < 0)
		result = -1 * result;
	result = ((char) result);
	return (result);
}
