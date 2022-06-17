#include "main.h"
/**
 *print_alphabet_x10 - prints
 *the alphabet in lower case 10x.
 *
 */
void print_alphabet_x10(void)
{
	int x;

	x = 1;
	while (x <= 10)
	{
		int a;

		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
		x++;

	}
}
