#include <stdio.h>

/**
 * swap_int - takes in two pointers to int, then exchange the values
 * @a: points to first value of a
 * @b: points to first value of b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
