#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int i = 0;
		while (i < 10)
		{
			putchar(i + '0');
			i++;
		}
	putchar('\n');
}
