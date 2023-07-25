#include "main.h"

/**
   * puts2 - a function that prints every other character of a string,
   * starting with the first character, followed by a new line.
    * @str: string
     * Return: Nothing
      */

void puts2(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
		i++;
	while (count < i)
	{
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
