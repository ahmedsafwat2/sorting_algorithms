#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, status = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				status |= swap_num(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
		if (status == 0)
			break;
		status = 0;
	}
}

/**
 * swap_num - swap two elements
 * @a: pointer to first element
 * @b: pointer to second element
 * Return: Always 1 (Sucess)
 */

unsigned int swap_num(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return (1);
}
