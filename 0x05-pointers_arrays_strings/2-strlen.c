#include "main.h"
/**
 * _strlen - prints the length of a given parameter(str).
 * @s: the address of the given string.
 *
 * Return: always zero(success).
 */
int _strlen(char *s)
{
	int n;
	int count;

	count = 0;
	n = 0;
	for (; *(s + n) != 0; n++)
	{
		n++;
		count++;
	}
	count++;
	return (count);
}
