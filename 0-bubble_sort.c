#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: giving array for sorting
 * @size: giving array size
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	bool swapped = false;

	if (size <= 1 || array == NULL)
	return;
	for (j = 0; j < size - 1; j++)
	{
	for (i = 0; i < size - j - 1; i++)
	{
	if (array[i] > array[i + 1])
	{
	tmp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = tmp;
	print_array(array, size);
	swapped = true;
	}
	}
	if (!swapped)
	break;
	}
}
