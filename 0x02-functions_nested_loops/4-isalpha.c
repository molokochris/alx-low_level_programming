#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that checks if a char passed into it is an alphabetic char or not
 * @c: input passed into the function for an alphabetic test
 * Return: returns 1 if the input is an alphabetic character, and 
 * 0 if it is not
 */
int _isalpha(int c)
{
	int i = isalpha(c);
	if (i > 0)
		return (1);
	else
		return (0);
}
