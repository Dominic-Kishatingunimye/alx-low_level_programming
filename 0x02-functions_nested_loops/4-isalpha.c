#include "main.h"

/**
 * _isalpha ->  a function that checks for alphabetic character.
 * @c: a character argument
 * Return: 0 or 1 depending on the condition
 */
int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
