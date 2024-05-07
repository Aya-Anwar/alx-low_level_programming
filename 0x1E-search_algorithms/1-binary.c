#include "search_algos.h"

/**
 * binary_search - searches array of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search.
 * @size: size of array
 * @value: value to search
 * Return: index of number or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, i, left = 0, right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: %d", array[i]);
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
