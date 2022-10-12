#include "function_pointers.h"

/**
 * array_iterator - searches for an integer
 * @array: array to serch through
 * @size: size of array
 * @action: function used to compare
 *
 * Return: first index for which cmp doesn't return 0, or -1
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = action(array[i]);
			if (r)
				break;

		}
		if (i < size)
			return (i);

	}
	return (-1);
}
