#include <stdio.h>

/**
 * puts2 - takes a string and print only nums divisible by 2
 * @str: the string being divided
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (i % 2 == 0)
		{
			putchar(*(str + i));
		}
		i++;
	}
	putchar('\n');
}
