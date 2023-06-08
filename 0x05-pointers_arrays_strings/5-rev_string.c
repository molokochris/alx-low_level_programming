#include <stdio.h>

/**
 * rev_string - takes a string and reverse it
 * @s: the string being reversed
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}

	while (i >= 0)
	{
		i--;
		s[j] = str[i];
		j++;
	}
}
