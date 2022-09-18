#include <stdio.h>

/**
 * main - prints alphabets in lowercase.
 *
 * Return: Always zero (0).
 */
int main(void)
{
	int a_code;

	for (a_code = 97; a_code <= 122; a_code++)
		putchar(a_code);
	putchar('\n');
	return (0);
}
