#include "main.h"

/**
 * _strcat -> a function that concatenates two strings.
 * a string pointed to by the @src to the end of the string @dest
 * @dest: string to be appended
 * @src: string to be concatenated upon
 * Return: always return 0
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, destLen = 0;

	while (dest[index])
		destLen++;

	for (index = 0; src[index]; index++)
		dest[destLen++] = src[index];

	return (dest);
}
