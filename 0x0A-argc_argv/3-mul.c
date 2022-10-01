#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes two int and return product
 * @argc: number of arguments
 * @argv: value of the arguments
 * Return:0 or 1
 */
int main(int argc, char *argv[])
{
	int prod = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", prod);
	return (0);
}
