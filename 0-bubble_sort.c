#include "sort.h"

/*bubble_sort -  function that sorts an array of integers in ascending order 
 * using the Bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, y, new;
	int tmp;

	if (array == NULL || size < 2)
		return;

	y = size;
	while (y > 0)
	{
		new = 0;
		for (x = 0; x < y; x++)
		{
			if (array[x] > array[x + 1])
			{
				tmp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = tmp;
				print_array(array,size);
			}
		}
		y = new;
	}
}
