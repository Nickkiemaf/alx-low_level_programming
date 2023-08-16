#include "main.h"
/**
 * _isalpha: Shows 1 if the input is a letter. 
 * otherwise shows 0
 *
 * @c: The character is in ASCII codes
 *
 * Return: Prints 1 if it is a letter. Prints 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
