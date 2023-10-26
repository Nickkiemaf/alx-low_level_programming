#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 0 if big endianness
 * 		1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
