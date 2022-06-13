#include <stdio.h>
/**
 * main - prints the hexadecimal numberss
 *
 * Return: always zero (success)
 */
int main(void)
{
	int x;
	int a;

	x = 0;
	a = 'a';

	while (x >= 15)
	{
		if (x >= 10)
			for (; a <= 'f'; a++)
				putchar(a);
		else
			for (; x <= 9; x++)
				putchar(x);
	}
	putchar('\n');
}
