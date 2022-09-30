#include <stdio.h>

/**
 * _strlen - takes in a pointer to first char of s, find out its length
 * @s: the string we're calculating length of
 * Return:0 return the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
