#include "main.h"
/**
 * print_sign - prints the sign of a given parameter(number)
 *@n: should be a number(int))
 *
 * Return: either 0,1,-1 depends on the parameter's nature.
 */
int print_sign(int n)
{
	int result;

	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
	{
		_putchar('+');
		result = +1;
	}
	return (result);
}
