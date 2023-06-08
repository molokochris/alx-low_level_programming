#include "main.h"

/**
 * print_last_digit - print the last digit from in put given
 * @n: the input that is being precessed
 * Return: the last digit from input
 */
int print_last_digit(int n)
{
	int l;
	l = n % 10;
	if (l < 0)
		l *= -1;
	_putchar(l + '0');
	return (l);
}
