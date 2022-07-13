#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -> function to generate randon valid passwords
 * Return: always 0 (on success)
 */
int main(void)
{
	int key, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		key = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);

	return (0);
}
