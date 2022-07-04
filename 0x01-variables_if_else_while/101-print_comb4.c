#include <stdio.h>

/**
 * main -> a program that prints all possible different combinations of three digits
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order, with three digits
 * You can only use putchar six times maximum in your code
 * The three digits must be different
 * Return: always 0
 */
int main(void)

{
	int n = '0';
	int m = '0';
	int x = '0';

	while (n <= '7')
	{
		while (m <= '8')
		{
			while (x <= '9')
			{
				if (n < m && m < x)
				{
					putchar(n);
					putchar(m);
					putchar(x);

					if (!(n == '7' && m == '8' && x == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				x++;
			}
			x = '0';
			m++;
		}
		m = '0';
		n++;
	}
	putchar('\n');
	return (0);
}
				
