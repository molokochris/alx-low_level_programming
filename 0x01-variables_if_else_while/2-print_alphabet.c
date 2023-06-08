#include <stdio.h>

/**
 * main - main block
 * Return:0
 */
int main(void)
{
	int i = 0;
	char alpha[28] = "abcdefghijklmnopqrstuvwxyz\n";
		while (alpha[i] != '\0')
		{
			putchar(alpha[i]);
			i++;
		}
return (0);
}
