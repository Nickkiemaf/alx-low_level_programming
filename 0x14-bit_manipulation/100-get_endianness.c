#include "main.h"

/**
* get_endianness - number
* Return: 0
*/
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
