#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Files: 0-malloc_checked.c
 * Owner: Ayokunle A Ajisafe
 *
 * Return A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *all_mem = malloc(b);

	if (all_mem == NULL)
		exit(98);
	return (all_mem);
}
