#include "main.h"
/**
  * _isupper - Function that checks for uppercase character
  *@c: character
  *Return: Uppercase characters
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
