#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element of an array.
 * @size: The size of the array
 * @action: a pointer to the function that is to be executed 
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
