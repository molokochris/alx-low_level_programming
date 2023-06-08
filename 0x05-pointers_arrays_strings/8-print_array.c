#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: the array being printed
 * @n: the number of elements printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));

		i++;
		if (i < n)
			printf(", ");
	}
	putchar('\n');
}
