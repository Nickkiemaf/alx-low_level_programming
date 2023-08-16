#include "main.h"
/**
 * Print_sign: Determines if the input is greater, equal, or lesser, than 0
 *
 * @c: Input is an interger
 *
 * Return: 1 when greater, 0 when equal, and -1 when lesser
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return(0);
	}
	_putchar('\n');
}
