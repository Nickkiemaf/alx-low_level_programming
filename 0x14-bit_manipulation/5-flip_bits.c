#include "main.h"

/**
 * flip_bits - function to flip number 1 to number 2
 * @n: number 1
 * @m: number 2
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
