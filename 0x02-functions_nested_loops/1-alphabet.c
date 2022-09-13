#include "main.h"

/**
 * print_alphabet prints alphabets
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
