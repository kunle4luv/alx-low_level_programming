#include "main.h"

/**
  * _isupper - A Function that checks for uppercase character
  *@c: The character
  *Return: An Uppercase characters
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
