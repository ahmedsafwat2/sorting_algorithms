#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, tmp, flag;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		tmp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				tmp = j;
				flag = 1;
			}
		}
		swap_num(&array[i], &array[tmp]);
		if (flag != 0)
			print_array(array, size);
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
