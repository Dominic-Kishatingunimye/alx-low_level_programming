#include <stdio.h>

/**
 * main -> prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Return: always 0 (success))
 */
int main(void)
{
	long int i, j, k, new;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		new = j + k;
		j = k;
		k = new;
	}
	return (0);
}
