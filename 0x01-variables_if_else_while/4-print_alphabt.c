#include <stdio.h>
/**
 * main - print all arabic letters in
 * small format except e & q.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		if (a == 'e' || a == 'q')
			continue;
		else
			putchar(a);
	putchar('\n');
	return (0);
}
