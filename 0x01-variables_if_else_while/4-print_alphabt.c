#include <stdio.h>

/**
 * main -> a program that prints the alphabet in lowercase,
 * without 'q' nor 'e' followed by a new line
 * can only use the putchar
 * every other function (printf, puts, etc…) is forbidden
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar(10);

	return (0);
}

