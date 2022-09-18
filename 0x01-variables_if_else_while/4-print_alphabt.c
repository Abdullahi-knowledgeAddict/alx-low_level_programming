#include <stdio.h>

/**
 * main - print to stdout  all alphabets in lower case except q & e.
 *
 * Return: Always zero success.
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
		else
			continue;
	}
	putchar(10);
	return (0);
}
