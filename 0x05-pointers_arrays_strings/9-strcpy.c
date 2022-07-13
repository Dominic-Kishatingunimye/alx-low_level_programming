#include "main.h"

/**
 * _strcpy -> a function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: Ths is destination
 * @scr: This is the copier
 *
 * Return: this returns copy
 */
char *_strcpy(char *dest, char *scr)
{
	char *start = dest;

	while (*scr != '\0')
	{
		*dest = *scr;
		dest++;
		scr++;
	}
	*dest = '\0';
	return (start);
}
