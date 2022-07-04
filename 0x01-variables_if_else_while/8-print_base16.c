#include <stdio.h>

/**
 * main -> a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar three times in your code
 * Return: always 0
 */
int main(void)

{
	int n;
	char letter;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
