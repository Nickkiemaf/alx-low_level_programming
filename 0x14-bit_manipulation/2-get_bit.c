#include "main.h"
/**
 * get_bit - function that gives the value of bit
 * @n: number
 * @index: index starting from 0
 *
 * Return: num
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);
	bit_val = (n >> index) & 1;

	return (bit_val);
}
