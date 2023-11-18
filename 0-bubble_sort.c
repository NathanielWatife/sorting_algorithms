#include "sort.h"

/*
 * bubble_sort - A function for bubble sorting.
 * @array: The array of sort.
 * @size: The length of array
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size);
{
    for (int i = 0; i < size; i++) 
    {
    swapped = False;
    for (int j = 0; j < size - i - 1; j++) 
    {
    if (array[j] > array[j + 1]) 
    {
    array[j], array[j + 1] = array[j + 1], array[j];
    swapped = True;
    print_array(array, size);
    }
    }
    if (!swapped) 
    {
    break; // Early termination if no swaps are made in an iteration
    }
    }
}