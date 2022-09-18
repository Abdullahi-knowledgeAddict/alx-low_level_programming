#include <stdio.h>

/**
 * main - print all single digit number.
 *
 * Return: Always zero success.
 */
int main(void)
{
	char numb;

	for (numb = '0'; numb <= '9'; numb++)
		putchar(numb);
	putchar(10);
	return (0);
}
