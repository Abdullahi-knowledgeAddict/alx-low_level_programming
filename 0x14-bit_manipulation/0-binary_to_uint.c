#include "main.h"
#include <stdio.h>
/**
 * writing a function that converts binary(stored as a string) numbers
 *to an unsigned int
 */

/**
 * Raise - raise a given numbr by a given power, i.e 2 in this case
 * @number: number to be raised
 * @power: to what degree it should be raised
 * Return: the result of the calculation
 */
unsigned int raise(unsigned int number, unsigned int power)
{
	unsigned int sum;

	sum = 1;
	for(; power > 0; sum *= number, power--);
	return (sum);
}

/**
 * binary_to_uint - converst a binary number to an unsigned int
 * @b: pointer to the binary number stored in a string
 * Return: converted number or 0 if
 *1) there is one or more chars in the string that is not 0 or 1;
 *2) b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, power;
	
	uint = power = 0;
	if (*b){
		for(; *b; b++, power++)
		{
			if (!((*b - '0' == 1) || (*b - '0' == 0)))
				return (0);
			if(*b - '0' == 1)
				uint += raise(2, power);

		}
		printf("%u\n", uint);
		return (uint);
	}
	else
		return (0);
}
