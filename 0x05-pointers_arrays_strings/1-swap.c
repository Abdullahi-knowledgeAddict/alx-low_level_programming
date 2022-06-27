/**
 * swap_int - swaps the value of two different integers.
 * @*a: first operand.
 * @*b: 2nd operand.
 */
void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = a;
	y = b;
	*a = y;
	*b = x;
}
