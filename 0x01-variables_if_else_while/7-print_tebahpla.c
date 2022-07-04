#include <stdio.h>

/**
 * main -> a program that prints the lowercase alphabet in reverse,
 * followed by a new line
 * You can only use the putchar function twice in your code
 * Return: always 0
 */
int main (void)

{
	int al;
	{
		for (al = 'z';al >= 'a'; al--)
			putchar(al);
		putchar('\n');

		return (0);
	}
}
