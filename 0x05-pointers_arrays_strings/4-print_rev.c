#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: string being printed in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
