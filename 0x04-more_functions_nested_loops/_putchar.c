#include <unistd.h>

/**
 * _putchar -> writes a character out to stdout
 * @c: The character to print
 * Return: on sucess 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
