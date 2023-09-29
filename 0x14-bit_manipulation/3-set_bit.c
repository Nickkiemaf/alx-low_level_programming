#include "main.h"
/**
 * set_bit - function that converts bit to 1
 * @n: pointer stores the address of the number
 * @index: index starting from 0
 *
 * Return: number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
