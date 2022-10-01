#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: the value of the arguments
 * Return:0
 */
int main(int argc, argv[])
{
	int i = 0;

	while (argv[i] != '\0')
	{
		_putchar(argv[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
