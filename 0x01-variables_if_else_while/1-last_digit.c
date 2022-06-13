#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of the numbers stored
 * in variable n.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int f = n % 10;

	if (f == 0)
		printf("Last digit of %d is %d and is 0\n", n, f);
	else if (f > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, f);
	else if (f < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, f);
	return (0);
}
