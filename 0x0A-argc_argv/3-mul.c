#include <stdio.h>

/**
 * main - takes two int and return product
 * @argc: number of arguments
 * @argv: value of the arguments
 * Return:0
 */
int main(int argc, char *argv[])
{
	int a = *argv[1] - '0', b = *argv[2] - '0';
	int prod = b * a;

	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", prod);
	return (0);
}
