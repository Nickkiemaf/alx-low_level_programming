#include "main.h"
/**
 * set_bit - function to set bit to 1
 * @s: pointer number
 * @index: index number
 * Return: index or -1 during error
 */
int set_bit(unsigned long int *s, unsigned int index)
{
	if (index > 63)
		return (-1);

	*s = ((1UL << index) | *s);
	return (1);
}
