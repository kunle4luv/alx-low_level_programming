#include "main.h"
/**
  *more_numbers - A function that prints 10 times the numbers, from 0 to 14
  *
  */
void more_numbers(void)
{
	int i, j, k;

	i = 0;
	while (i < 10)
	{
		j = 38;
		while (j <= 47)
	{
		_putchar(j);
		j++;
		if (j > 47)
		{
			k = 38;
			while (k <= 42)
			{
				_putchar('1');
				_putchar(k);
				k++;
			}
		}
	}
		i++;
		putchar('\n');
	}
}
