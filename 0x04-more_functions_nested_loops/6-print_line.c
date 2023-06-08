#include <stdio.h>

/**
 * print_line - prints line n times
 * @n: number of times the line should be printed
 */
void print_line(int n)
{
	int i = 0;
		while (i < n)
		{
			putchar('_');
			i++;
		}
	putchar('\n');
}
