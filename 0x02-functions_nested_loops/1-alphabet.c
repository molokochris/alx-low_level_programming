#include "main.h"

/**
 * print_alphabet - prints alphabets in lower cases
 * from a to z
 */
void print_alphabet(void)
{
	int alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
}
