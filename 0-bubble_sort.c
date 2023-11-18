#include "sort.h"

/**
 *  bubble_sort - A function for bubble sorting.
 * @array: The array of sort.
 * @size: The length of array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size) 
{
    size_t i = 0, j = 0;

    if  (array == NULL || size == 0)
    return;

    for (; i < size - i - 1; i++) 
	{
    for (j = 0; j < size - i - 1; j++) 
	{
    if (array[j] > array[j + 1]) 
	{
    /**
	 * Swap elements directly without using a temporary variable
	 */
    array[j + 1] = array[j];
    }
    }
    }
}