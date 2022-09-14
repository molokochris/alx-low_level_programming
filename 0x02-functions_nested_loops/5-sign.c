#include "main.h"

/**
 * print_sign - prints the sign of a number,
 * + for a positive number and - for a negative num
 * @n: is the input being tested
 * Return: returns -1 if n is less than 0, 
 * 0 if n is equal to zero
 * 1 if n is greater than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
