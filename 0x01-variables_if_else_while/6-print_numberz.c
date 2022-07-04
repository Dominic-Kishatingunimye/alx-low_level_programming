#include <stdio.h>

/**
 * main ->  a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 * You can only use the putchar function twice in your code
 * (every other function (printf, puts, etc…) is forbidn)
 * Return: always 0
 */
int main(void)

{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar((ch % 10)+'0');
	}
	putchar(10);

	return (0);
}
