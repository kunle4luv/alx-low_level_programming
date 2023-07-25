#include "main.h"
/**
   * _puts - A that  prints a string, followed
    * by a new line, to stdout.
     * @str: string
      * Return: Prints string
       */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
