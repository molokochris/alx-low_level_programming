#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i = 0, m = 1, p;
		while (i < 10)
		{
			_putchar(48);
			while (m < 10)
			{
				_putchar(',');
				_putchar(' ');

				p = i * m;
				if (p < 10)
					_putchar(' ');
				else
					_putchar((p / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
}
