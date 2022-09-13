#include "main.h"
#include <unistd.h>

/**
 * main - putchar putchar
 * write prints out putchar one character at a time
 *
 * Return:0
 */
int _putchar(char c)
{
	return (write(1, "_putchar\n", 9));
return (0);
}
