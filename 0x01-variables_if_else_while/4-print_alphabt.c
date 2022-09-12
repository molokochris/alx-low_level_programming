#include <stdio.h>

/**
 * main - main block
 * Return:0
 */
int main(void)
{
	char alpha[26] = "abcdfghijklmnoprstuvwxyz\n";
	int i = 0;
		while (alpha[i] != '\0')
		{
			putchar(alpha[i]);
			i++;
		}
return (0);
}
