#include "main.h"

/**
 * _strncat - a function to catenates two strings
 * @dest: destination
 * @src: source of string
 * @n: input of max bytes to be used
 * Return: Always 0 success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}
	return (dest);
}
