#include "main.h"
/**
  * puts_half -  a function that prints half of a string,
  * followed by a new line.
  * @str: string
  * Return: Nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int count;

	while (str[i] != '\0')
		i++;

	count = i / 2;
	while (count < i)
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
