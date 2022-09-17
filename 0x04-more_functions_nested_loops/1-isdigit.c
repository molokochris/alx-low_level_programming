#include <stdio.h>

/**
 * _isdigit - takes an int and test if it a digit or not
 * @c: input being tested
 * Return: 1 when true, 0 when false
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
