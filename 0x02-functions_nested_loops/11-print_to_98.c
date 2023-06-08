#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: the number the count starts with
 */
void print_to_98(int n)
{
	int i = n;
		if (n > 98)
		{
			while (i > 98)
			{
				printf("%d, ", i);
				--i;
			}
		}
		else
		{
			while (i < 98)
			{
				printf("%d, ", i);
				++i;
			}
		}
	printf("98\n");
}
