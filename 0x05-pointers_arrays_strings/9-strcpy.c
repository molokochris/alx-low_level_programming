#include <stdio.h>

/**
 * _strcpy - takes a string and copies it to the buffer pointed to by dest
 * @dest: the destination of src
 * @src: the string being copied to dest
 * Return: returning the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
