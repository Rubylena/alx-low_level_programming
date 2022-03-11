#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description - This program will assign a random number to the variable n
 * and print the last digit of the number stored in the variable n
 * Return: 0
 */
int main(void)
{
	int n;
	int ld;

	ld = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	} else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}