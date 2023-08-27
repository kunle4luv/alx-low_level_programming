#include "main.h"

int str_length(char *s);
int is_palindrome_assist(char *s, int start, int end);
int is_palindrome(char *s);

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
 * is_palindrome_assist - Helper function to check if a string is a palindrome.
 * @s: The input string.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if palindrome & 0 if not or otherwise.
 */
int is_palindrome_assist(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_assist(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if palindrome & 0 if not/otherwise.
 */
int is_palindrome(char *s)
{
	int length = str_length(s);

	return (is_palindrome_assist(s, 0, length - 1));
}
