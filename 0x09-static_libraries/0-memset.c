#include <stdio.h>

/**
 * _memset - fills n bytes of memory area pointed by s, with constant byte b
 * @s: points to char being filled
 * @b: constant bytes that s is being filled with
 * @n: number of bytes that should be filled in s
 * Return: characters
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *res = s;

	while (i < n)
	{
		*(res + i) = b;
		i++;
	}
	return (res);
}
