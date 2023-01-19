#include "function_pointers.h"

/**
 * array_iterator - prints each array elem on a new
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
