#include <stdio.h>

/**
 * _puts - take a string pointer and print the string
 * @str: string being printed
 */
void _puts(char *str)
{
	char res[];
	int i = 0;

		while (*(str + i) != '\0')
		{
			res[i] = *(str + i);
			i++;
		}
		printf("%s", res);
}
