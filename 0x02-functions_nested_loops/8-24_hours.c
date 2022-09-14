#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer
 */
void jack_bauer(void)
{
	int min = 0, hr = 0;
		while (hr < 24)
		{
			while (min < 60)
			{
				_putchar((hr / 10) + 48);
				_putchar((hr % 10) + 48);
				_putchar(':');
				_putchar((min / 10) + 48);
				_putchar((min % 10) + 48);
				_putchar('\n');
				++min;
			}
			++hr;
		}
}
