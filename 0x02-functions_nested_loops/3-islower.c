#include "main.h"
/**
 * _islower -  returns 1 or 0, if a character is in lower/higher case.
 * @c: the alphabetic character to be checked.
 *
 * Return: returns 1 or 0 as specifed in function description above.
 */
int _islower(int c)
{
	int a;
	int result;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
			result = 1;
			break;
		}
		else
			result = 0;
	}
	return (result);
}

