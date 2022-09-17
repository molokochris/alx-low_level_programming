#include <stdio.h>

/**
 * _isupper - takes in an input and test if it is uppercase or not
 * @c: input being tested
 * Return: 1 if it is true, 0 when it is false
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
