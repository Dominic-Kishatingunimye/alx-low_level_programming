#include "main.h"

/**
 * print_number -> prints a number
 * @n: number parameter
 */
void print_number(int n)
{
	unsigned int d;

	if (n < 0)
	{
		d = -n;
		_putchar('-');
	} else
	{
		d = n;
	}
	if (d / 10 != 0)
		print_number(d / 10);
	_putchar((d % 10) + '0');
}
