#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
