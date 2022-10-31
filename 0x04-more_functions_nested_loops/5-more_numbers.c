#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 0 to 14, 10 times
 */
void more_numbers(void)
{
	int count = 0, i = 0;

	while (count < 10)
	{
		while (i < 14)
		{
			putchar(i + '0');
			i++;
		}
		putchar('\n');
		i = 0;
		count++;
	}
}
