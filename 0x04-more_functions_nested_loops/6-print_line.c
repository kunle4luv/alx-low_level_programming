#include "main.h"
/**
   * print_line - A  function that draws a straight line in the terminal.
    * @n:  the number of times the character _ should be printed
     * Return: Straight line in the terminal.
  */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n <= 0)
			break;
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
