#include <stdio.h>

/**
 * main -> compute and print the sum of all th emultiples 
 * of 3 and 5 below 1024
 * Return: always 0 for success
 */
int main(void)
{
	unsigned long int add3, add5, add;
	int n;

	add3 = 0;
	add5 = 0;
	add = 0;

	for (n = 0; n <  1024; ++n)
	{
		if ((n % 3) == 0)
		{
			add3 = add3 + n;
		} else if ((n % 5) == 0)
		{
			add5 = add5 + n;
		}
	}
	add = add3 + add5;
	printf("lu\n", add);
	return (0);
}
