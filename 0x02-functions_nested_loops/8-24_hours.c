#include "main.h"

/**
 * jack_bauer -> print 24 hours
 */
void jack_baur(void)
{
	int m, n;

	for (m = 0; m < 24; m++)
	{
		for (n = 0; n < 60; n ++)
		{
			if (m < 10)
			{
				_putchar('m');
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			if (n < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(n + '0');
			}
			else if (n + '0')
			{
				_putchar(':');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
