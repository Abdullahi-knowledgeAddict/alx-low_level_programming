#include <stdio.h>
/**
 * main - prints the hexadecimal numberss
 *
 * Return: always zero (success)
 */
int main(void)
{
	int hex;

	for (hex = '0'; hex <= 15; hex++)
		if (hex == 10)
			putchar('a');
		else if (hex == 11)
			putchar('b');
		else if (hex == 12)
			putchar('c');
		else if (hex == 13)
			putchar('d');
		else if (hex == 14)
			putchar('e');
		else
			putchar('f');
	return (0);
}
