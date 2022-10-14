#include <stdio.h>

/**
 * puts2 - takes a string and print only nums divisible by 2
 * @str: the string being divided
 */
void puts2(char *str)
{
	int i =0, j = 0;
	char s[500];

	while (*(str + i))
	{
		if (*(str + i) % 2 == 0)
		{
			putchar(*(str + i));
		}
		i++;
	}
	putchar('\n');
}
