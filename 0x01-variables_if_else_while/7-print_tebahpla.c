#include <stdio.h>

/**
 * main - main block
 * Return:0
 */
int main(void)
{
	char  alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;
		while (i >= 0)
		{
			putchar(alpha[i]);
			i--;
		}
		putchar('\n');
return (0);
}
