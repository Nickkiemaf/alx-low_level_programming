#include "main.h"
/**
 * clear_bit - function to clear bit
 * @n: pointer to store the address of the num
 * @index: index
 * Return: return 1 if it work, if not return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
