#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random num to the variable n each time it is executed will
 * print the last digit of the number stored in the variable n.
 * Return: always 0
 */
int main(void)
{
	int n, dig;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* to FIND the last digit of a number 'n' */
	dig = n % 10;
	if (dig == 0)
	{
		printf("Last digit of %d is %d and is 0", n, dig);
	} else if (dig < 6 && dig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, dig);
	} else
	{
		printf("Last digit of %d is %d and is greater than 5", n, dig);
	}
	printf("\n");
	return (0);
}
