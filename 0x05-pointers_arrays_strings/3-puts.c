#include <stdio.h>

/**
 * _puts - take a string pointer and print the string
 * @str: string being printed
 */
void _puts(char *str)
{
	int sz = _strlen(str);
	char res[sz];
	int i = 0;

		while (i < sz)
		{
			res[i] = *(str + i);
			i++;
		}
		printf("%s", res);
}
