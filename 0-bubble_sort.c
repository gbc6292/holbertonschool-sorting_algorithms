#include "sort.h"

/*bubble_sort -  function that sorts an array of integers in ascending order 
 * using the Bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t x, size_dup = size;
	int tmp;
	bool swp;

	if (array == NULL || size < 2)
		return;

	while (swp == false)
	{
		swp = true;
		for (x = 0; x < (size_dup - 1); x++)
		{
			if (array[x] > array[x + 1])
			{
				tmp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = tmp;

				print_array(array,size);
				swp = false;
			}
		}
	}
}
