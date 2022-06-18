#include "main.h"
/**
 * _isalpha - checks if a given parameter is an alphabet.
 * @c: the parameter to be inspected.
 *
 * Return: 1 or 0 if parameter is alphabetic or not , repectively.
 */
int _isalpha(int c)
{
	int a;
	int A;
	int result;

	for (a = 'a', A = 'A'; A <= 'Z'; a++, A++)
	{
		if (c == a || c == A)
		{
			result = 1;
			break;
		}
		else
			result = 0;
	}
	return (result);
}

