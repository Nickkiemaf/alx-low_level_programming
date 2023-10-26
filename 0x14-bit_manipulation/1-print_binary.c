#include "main.h"
/**
 * print_binary - function to convert binary to decimal(base 10)
 * @s: binary number
 */
void print_binary(unsigned long int s)
{
	int i;
	counters = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = s >> i;
		if (current & 1)
		{
			_putchar('1');
			counters++;
		}
		else if (counters)
			_putchar('0');
	}
	if (!counters)
		_putchar('0');
}
