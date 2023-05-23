#include "sort.h"

/*bubble_sort -  function that sorts an array of integers in ascending order 
 * using the Bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < (size - 1); y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array,size);
			}
		}
	}
}
