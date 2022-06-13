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

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
}
