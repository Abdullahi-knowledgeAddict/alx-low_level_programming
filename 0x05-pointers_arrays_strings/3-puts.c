#include "main.h"
/**
 * _puts - prints a string.
 *@str: the string to me printed
 *
 */
void _puts(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != 0)
	{
		_putchar(str);
	}
	_putchar('\n');
}
