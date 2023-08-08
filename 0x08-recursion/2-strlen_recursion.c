#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s:the inpu string to be measured.
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	int stringLength = 0;

	if (*s) 
	{
		stringLength++;
		stringLength += _strlen_recursion(s + 1);
	}
	return (stringLength);
}
