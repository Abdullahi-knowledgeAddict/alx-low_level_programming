#include <stdio.h>
/**
 * main - prints all single digit combinations
 *
 * Return: Always zero (success)
 */
int main(void)
{
	int f;

	for (f = '0'; f <= '9'; f++)
	{
		putchar(f);
		if (f != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
			break;
	}
	return (0);
}
