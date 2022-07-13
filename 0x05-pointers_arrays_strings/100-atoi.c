#include "main.h"

/**
* _atoi -> a function to convert a string to an integer
* @s: a pointer to a string character
* Return: void
*/
int _atoi(char *s)
{
	int x;
	unsigned int n;
	char *temp;

	temp = s;
	n = 0;
	x = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			x *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			n = n * 10 + (temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (n * x);
}
