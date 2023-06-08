#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: the value of those arguments
 * Return:0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
