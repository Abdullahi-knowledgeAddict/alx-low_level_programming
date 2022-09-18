#include <stdio.h>

/**
 * main - print single digit , seperated by commas and space.
 *
 * Return: Always zero (success).
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
