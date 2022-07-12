#include "main.h"

/**
 * swap_int - function to swap the value of two integers
 * @a: integer1
 * @b: integer2
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
