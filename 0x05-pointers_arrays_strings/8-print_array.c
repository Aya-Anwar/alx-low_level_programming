#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: The array
 * @n: The number of elements in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
			if (i + 1 != n)
				printf(", ");
	}
	printf("\n");
}
