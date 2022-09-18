#include <stdio.h>

/**
 * main - print lower case alphabet in reverse.
 *
 * Return: Always zero success (0).
 */
int main(void)
{
	int letters;

	for (letters = 122; letters >= 97; letters--)
		putchar(letters);
	putchar(10);
	return (0);
}
