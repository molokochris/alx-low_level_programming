#include "main.h"
#include <string.h>

/**
 * main - putchar putchar
 * This program prints out _putchar
 *
 * Return:0
 */
int main(void)
{
	char str[9] = "_putchar\n";
	int i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
return (0);
}
