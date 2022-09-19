#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: string being printed in reverse
 */
void print_rev(char *s)
{
	int len = strlen(s);

		while (len >= 0)
		{
			putchar(*(s + len));
			len--;
		}
		puthcar('\n');
}
