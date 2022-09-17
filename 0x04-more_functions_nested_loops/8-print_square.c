#include <stdio.h>

/**
 * print_square - prints sqaure
 * @size: the size of the square
 */
void print_square(int size)
{
	int y = 0;
		while (y < size)
		{
			int x = 0;
				while (x < size)
				{
					_putchar('#');
					x++;
				}
			_putchar('\n');
			y++;
		}
}
