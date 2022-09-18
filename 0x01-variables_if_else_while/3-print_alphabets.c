#include <stdio.h>

/**
 * main - prints alpabet in uppercase and lowercase.
 *
 * Return: Always zero (0) with indicates success.
 */
int main(void)
{
	int A = 65;
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (A  <= 90)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
