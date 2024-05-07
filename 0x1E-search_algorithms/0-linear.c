#include "search_algos.h"
/**
 * linear_search - Function to perform linear search
 * @array: Pointer to the first element of the array to search.
 * @size: size of array
 * @value: value to search
 * Return: index of number or -1
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
}
return (-1);

}
