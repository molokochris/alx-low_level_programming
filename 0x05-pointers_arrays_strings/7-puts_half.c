#include <stdio.h>

/**
 * puts_half - takes a string and printf half of the string
 * @str: the string being printed
 */
void puts_half(char *str)
{
	int i = 1;

	while (*(str + i) != '\0')
	{
		i++;
	}

	i -= 1;

	if (i % 2 == 0)
	{
		i = i / 2;

		while (*(str + i))
		{
			i++;
			putchar(*(str + i));
		}
	}
	else
	{
		i = (i - 1) / 2;

		while (*(str + i))
		{
			i++;
			putchar(*(str + i));
		}
	}
	putchar('\n');
}
