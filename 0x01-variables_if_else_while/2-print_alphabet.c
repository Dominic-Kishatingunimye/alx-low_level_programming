#include <stdio.h>

/**
 * main -> a program that prints the alphabet in lowercase, followed by a new line.
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * return: always 0
 */
int main(void)
{
	int ch;
	for (ch = 97; ch <= 122; ch++)	
	{
		putchar(ch);
	}
	putchar(10);

	return(0);
}

