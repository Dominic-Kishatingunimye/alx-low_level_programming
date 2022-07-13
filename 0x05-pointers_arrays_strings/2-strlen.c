#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen -> a function that returns the length of a string
 * s: string length to be counted
 * Return: always 0
 */
int _strlen(char *s)
{
	int len;

	len = strlen(*s);
	printf(" %d\n", len);
	return (0);
}
