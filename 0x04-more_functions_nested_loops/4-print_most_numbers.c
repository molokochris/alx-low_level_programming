#include <stdio.h>

/**
 * print_most_numbers - prints numbers, 0 to 9 skipping 2 and 4
 */
void print_most_numbers(void)
{
	int i = 0;
		while (i < 10)
		{
			if ((i == 2) || (i == 4))
				i++;
			else
			{
				putchar(i + '0');
				i++;
			}
		}
		putchar('\n');
}
