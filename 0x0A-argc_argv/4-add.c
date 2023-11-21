#include <stdio.h>
#include <ctype.h>

/**
 * main - calculate sum of argv
 * @argc: counts the num of arguments
 * @argv: the numbers passed
 * Return:0 if no errors, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	while (i < argc)
	{
		if ()
		{
			printf("Error\n");
			return (1);
			break;
		}
		else
		{
			sum += atoi(argv[i]);
			i++;
		}
	}
	return (0);
}
