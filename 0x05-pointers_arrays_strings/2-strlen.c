#include "main.h"

/**
 * _strlen -> a function that returns the length of a string
 * @s: string length to be counted
 * Return: always 0
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (0);
}
