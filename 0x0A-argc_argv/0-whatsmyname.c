#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: the value of the arguments
 * Return:0
 */
int main(int argc,char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		putchar(argv[0][i]);
		i++;
	}
	putchar('\n');
	return (0);
}
