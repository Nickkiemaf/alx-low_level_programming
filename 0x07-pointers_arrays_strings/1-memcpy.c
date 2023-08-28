#include <stdio.h>
#include "main.h"
/**
 * Function that copies memory area
 * dest: memory where is stored
 * src: memory where is copied
 * n: number of bytes
 * returns: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;

	for (int r = 0; r < i; r++)
	{
		dest[r] = src[r];
	}

	return (dest);
}
