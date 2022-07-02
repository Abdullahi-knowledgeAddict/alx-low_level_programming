#include "main.h"
/**
 * _strlen - prints the length of a given parameter(str).
 * @s: the address of the given string.
 *
 * Return: always zero(success).
 */
int _strlen(char *s)
{
	int length;
	
	length = 0;
	for (; *(s + length) != '\0';)
	{
		length++;
	}
	return (length);
}
