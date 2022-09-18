#include <stdio.h>

/**
 * main - print single digits of base 16.
 *
 * Return: Always zero (0) success.
 */
int main(void)
{
	int n;
	char a;

	for (n = 0; n <=  9; n++)
		putchar(n + '0');
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar(10);
	return (0);
}
