#include "main.h"
/**
 * print_diagsums - that prints the sum of the two diagonals of a square matrix
 * @a: Pointer to an array
 * @size: Size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int diagonal_sum = 0;
	int anti_diagonal_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diagonal_sum += a[i];
		anti_diagonal_sum += a[size - 1 - i];
		a += size;
	}
	printf("%d, ", diagonal_sum);
	printf("%d\n", anti_diagonal_sum);
}
