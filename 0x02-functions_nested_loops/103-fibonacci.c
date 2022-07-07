#include <stdio.h>

/**
 * main - find prints the sum of the even-valued terms
 * followed by a new lin
 * Return: always 0 on success
 */
int main(void)
{
	int i;
	unsigned long int j, k, new, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		new = j + k;
		j = k;
		k = new;
	}
	printf("%lu\n", sum);

	return (0);
}
