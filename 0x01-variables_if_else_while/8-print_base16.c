#include <stdio.h>

/**
 * main - main block
 * Return:0
 */
int main(void)
{
	char base[18] = "0123456789abcdef\n";
	int i = 0;
		while (base[i] != '\0')
		{
			putchar(base[i]);
			i++;
		}
return (0);
}
