#include <stdio.h>

/**
 * main - main block
 * _putchar - prints putchar
 * Return:0
 */
int _putchar(void)
{
	char chars = "_putchar";
	int i = 0;
		while (chars[i] != '\0')
		{
			putchar(chars[i]);
			i++;
		}
	putchar('\n');
return (0);
}
