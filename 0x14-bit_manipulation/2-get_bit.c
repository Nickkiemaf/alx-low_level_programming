#include "main.h"
/**
 * get_bit - function to return  the value of a bit
 * @n: number
 * @index: bit index
 * Return: index or -1 at error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
