#include "main.h"

/**
 * flip_bits - function to return the number of bits to be flipped
 * @s: 1st  number
 * @t: 2nd  number
 *
 */
unsigned int flip_bits(unsigned long int s, unsigned long int t)
{
	int i, counter = 0;
	unsigned long int current;
	unsigned long int equiv = s ^ t;

	for (i = 63; i >= 0; i--)
	{
		current = equiv >> i;
		if (current & 1)
			counter++;
	}

	return (counter);
}
