#include <stdio.h>

/**
 * _strchr - finds if char is on string
 * @s: the string being checked
 * @c: the char being looked for on s
 * Return: the point where c starts on s, or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
