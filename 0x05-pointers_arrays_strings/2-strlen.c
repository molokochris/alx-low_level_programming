#include <stdio.h>

/**
 * _strlen - takes in a pointer to first char of s, find out its length(whole string)
 * @s: the string
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
