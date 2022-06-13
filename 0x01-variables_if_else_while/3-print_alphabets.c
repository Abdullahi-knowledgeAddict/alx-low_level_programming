#include <stdio.h>
/**
 * main - prints alphabetical letters in both
 * capital & small form.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int C;
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
