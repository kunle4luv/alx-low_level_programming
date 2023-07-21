#include "main.h"
/**
  *print_triangle - A function that prints a triangle, followed by a new line.
  * @size:  the size of the traingle
  * Return: triangle in the terminal.
  */
void print_triangle(int size)
{
	int i, j, k, m;

	m = 1;
	i = size;
	if (size <= 0)
		_putchar('\n');
	while (i >= 1)
	{
		j = 1;
		while (j <= i - 1)
		{
			_putchar(' ');
			j++;
		}
		k = 1;
		while (k <= m)
		{
			_putchar('#');
			k++;
		}
			_putchar('\n');
			m++;
			i--;
	}
}
