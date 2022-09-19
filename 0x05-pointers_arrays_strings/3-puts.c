#include <stdio.h>

/**
 * _puts - take a string pointer and print the string
 * @str: string being printed
 */
void _puts(char *str)
{
	int i = 0;

		while (*(str + i) != '\0')
		{
			putchar(*(str + i));
			i++;
		}
		putchar('\n');
}
