#include <stdio.h>

/**
 * main -> a program to prints all possible different combo of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Numbers should be printed in ascending order, with two digit
 * You can only use putchar five times maximum in your code
 * Return: always 0
 */
int main(void)

{
	int n = '0';
	int a = '0';

	while (n <= '9')
	{
		while (a <= '9')
		{
			if (!(n > a || n == a))
			{
				putchar(n);
				putchar(a);
				
				if (n == '8' && a == '9')
				{
					putchar('\n');
				}

				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		a = '0';
		n++;
	}
	return (0);
}

