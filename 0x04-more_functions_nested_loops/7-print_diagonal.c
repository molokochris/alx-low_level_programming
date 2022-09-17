#include <stdio.h>

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
					putchar(' ');
					x++;
				}
			putchar('\\');
			if (y < (n - 1))
				putchar(n - 1);
			y++;
		}
		putchar('\n');
}
