#include "main.h"

/**
 * print_alphabet_x10 ->a function that prints 10 times the alphabet
 * in lowercase, followed by a new line
 * Return: always 0
 */
void print_alphabet_x10(void)

{
	int x, i;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
