#include "main.h"
/**
  * print_array - a function that prints n elements of an array of integers,
  * followed by a new line.
  * @a: integer pointer
  * @n: number of elements of the araay to be printed
  * Return: Nothing
  */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
		i++;
	}
}
