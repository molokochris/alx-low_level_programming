#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints '\' diagonally
 * @n: number oftimes it should print '\'
 */
void print_diagonal(int n)
{
	int y = 0;
		while (y < n)
		{
			int x = 0;
				while (x < y)
				{
					_putchar(' ');
					x++;
				}
			_putchar('\\');
			if (y < (n - 1))
				_putchar(n - 1);
			y++;
		}
		_putchar('\n');
}
