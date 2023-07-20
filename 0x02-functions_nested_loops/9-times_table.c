#include "main.h"
/**
  *times_table - a function that prints the 9 times table, starting with 0
  *
  *
  */
void times_table(void)
{
	int i, j, num, k, l;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			if (j == 0)
			{
				_putchar(j + '0');
				_putchar(',');
			}
			else
			{
				num = i * j;
				if (num > 9)
				{
					k = num / 10;
					l = num % 10;
					_putchar(' ');
					_putchar(k + '0');
					_putchar(l + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				if (j != 9)
					_putchar(',');
				else
					_putchar('\n');
			}
			j++;
		}
		i++;
		/*putchar('\n');*/
	}
}
