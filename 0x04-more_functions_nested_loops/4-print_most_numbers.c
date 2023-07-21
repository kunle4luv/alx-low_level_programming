#include "main.h"
/**
  *print_most_numbers- Function that prints numbers from 0 to 9
  *
  *
  */
void print_most_numbers(void)
{
	int i;

	i = 38;
	while (i <= 47)
	{
		if (i != 40 && i != 42)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
