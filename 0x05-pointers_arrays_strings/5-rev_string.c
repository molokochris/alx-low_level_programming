#include <stdio.h>

/**
 * rev_string - takes a string and reverse it
 * @s: the string being reversed
 */
void rev_string(char *s)
{
	int i = 0;
	char str[500];

	while (*(s + i) != '\0')
	{
		*(str + i) = *(s + i);
		i++;
	}
	s[1] = 'e';
	int j = 0;

	while (i >= 0)
	{
		i--;
		s[j] = str[i];
		j++;
	}
/*	*(s + j) = '\0';*/
}
