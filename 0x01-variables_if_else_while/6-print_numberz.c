#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 *using putchar function only, without using char type.
 *
 * Return: Always zero success.
 */
int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
		putchar(numb + '0');
	putchar(10);
	return (0);
}
