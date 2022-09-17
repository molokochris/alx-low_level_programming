#include <stdio.h>

/**
 * more_numbers - prints 0 to 14, 10 times
 */
void more_numbers(void)
{
	char i[20] = "01234567891011121314";
	int z = 0;
		while (z < 10)
		{
			int j = 0;
				while (z < 10)
				{
					putchar(i[j]);
					j++;
				}
			z++;
			putchar('\n');
		}
}
