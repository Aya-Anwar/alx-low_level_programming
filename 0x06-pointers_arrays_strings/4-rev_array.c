#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: An array of integers
 * @n: The number of elements to swap
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, swap;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
	}
}
