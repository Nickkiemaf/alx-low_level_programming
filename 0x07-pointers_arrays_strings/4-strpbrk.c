#include <stdio.h>
#include "main.h"
/**
 * Function that searches a string for any set of bytes
 * s - initial string
 * accept - second string
 * return - returns a pointer to the byte in s that matches the one in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int k;
	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
