#include <stdio.h>

/**
 * main - main block
 * Return:0
 */
int main(void)
{
	int i = 0;
	int j = 1;
		while (i < 9)
		{
			while (j < 10)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i < 9)
				{
					putchar(' ');
					putchar(',');
				}
				j++;
			}
			j = 2;
			i++;
		}
	putchar('\n');
return (0);
}
