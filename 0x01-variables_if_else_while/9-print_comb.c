#include <stdio.h>

/**
 * main -> Write a program that
 * prints all possible combinations of single-digit numbers
 * Numbers must be separated by ',' followed by a space
 * Numbers should be printed in ascending order
 * You are not allowed to use any variable of type char
 * Return: always 0
 */
int main(void)

{
	int n;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');

	return (0);
}
