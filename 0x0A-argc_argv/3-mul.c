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
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int prod = a * b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", prod);
	return (0);
}
