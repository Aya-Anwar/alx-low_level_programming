#include "main.h"
#include <stdio.h>

/**
 * main - prints first 50 numbers of the fibo sequence
 *
 * Return: 0
*/


int main(void)
{
	int a, b;
	long n1, n2, next;

	n1 = 1;
	n2 = 2;
	b = 50;

	for (a = 0; a < b; a++)
	{
		if (a == 49)
		{
			printf("%lu", n1);
		} else
		{
			printf("%lu, ", n1);
			next = n1 + n2;
			n1 = n2;
			n2 = next;
		}
	}
	printf("\n");
	return (0);
}
