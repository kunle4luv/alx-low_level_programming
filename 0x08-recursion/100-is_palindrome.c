#include "main.h"

int str_length(char *s);
/**
 * str_length - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string always.
 */
int str_length(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * is_palindrome - To Check if a string is a palindrome
 * @s: The input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = str_length(s);
	int i = 0, j = length - 1;

	while (i < j)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
		i++;
		j--;
	}
	return (1);
}
