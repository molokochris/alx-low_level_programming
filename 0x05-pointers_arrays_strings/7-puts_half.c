#include <stdio.h>

/**
 * puts_half - takes a string and printf half of the string
 * @str: the string being printed
 */
void puts_half(char *str)
{
	int i = 0, count = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		count = i / 2;

		while (count < i)
		{
			putchar(*(str + count));
			count++;
		}
	}
	else
	{
		count = (i + 1) / 2;

		while (count < i)
		{
			putchar(*(str + count));
			count++;
		}
	}
	putchar('\n');
}
