#include "main.h"

/**
 * _isalpha ->  a function that checks for alphabetic character.
 * Return: 0 or 1 depending on condition
 */
void _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
