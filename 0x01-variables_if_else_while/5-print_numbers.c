#include <stdio.h>

/**
 * main -> a program to prints all single digit numbs of base 10
 * starting from 0 followed by a new line
 * Return: always 0
 */
int main(void)

{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");

	return (0);
}
