#include <stdio.h>

/**
 * main - main block
 * Return:0
 */
int main(void)
{
	int i = 0;
		while (i < 10)
		{
			putchar('0' + i);
			if (i < 9)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		putchar('\n');
return (0);
}
