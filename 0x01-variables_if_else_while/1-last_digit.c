#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: print value of n status:
 *              greater than, is zero and is not less than 6.
 * Return: 0(success)
 */
int main(void)
{
	int n;
	int digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, digit);
	return (0);
}
