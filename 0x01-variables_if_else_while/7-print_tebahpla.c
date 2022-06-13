#include <stdio.h>
/**
 * main - print the lower case alphabets in reverse
 *
 * Return: Always zero (success)
 */
int main(void)
{
	int l;

	for (l = 'z'; l >= 'a' ; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
