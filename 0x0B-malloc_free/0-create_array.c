#include "main.h"
#include <stdlib.h>

/**
 * *create_array - A function that creates an array of chars &
 * initialies it witha specific char.
 * @size: the size of the memory to print
 * @c: The specfic char to initialies the array with.
 *
 * Return: 0 if the function fail(NULL) or otherwise - a pointer
 * to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);

	while (size--)
		array[size] = c;
	return (array);
}
