#include <stdio.h>
/**
 * main - print single digits of base ten
 *
 * Return: always zero (success)
 */
int main(void)
{
	int b10;

	for (b10 = '0'; b10 <= '9'; b10++)
		putchar(b10);
	putchar('\n');
	return (0);
}
