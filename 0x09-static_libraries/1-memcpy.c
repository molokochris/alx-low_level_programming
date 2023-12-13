#include <stdio.h>

/**
 * _memcpy - assigns n bytes to s
 * @dest: where the bytes are added
 * @src: what is added(input)
 * @n: how many times it is added
 * Return: the result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *res = dest;

	while (i < n)
	{
		*(res + i) = *(src + i);
		i++;
	}
	return (res);
}
