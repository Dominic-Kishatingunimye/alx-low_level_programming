#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main -> assign a random number to the variable n each time it is executed and prints out
 * based on a condition
 * return: always 0
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("%d is positive\n", n);
	}
	if (n == 0) {
		printf("%d is zero\n", n);
	}
	if (n < 0) {
		printf("%d is negative\n", n);
	}
	return (0);
}
