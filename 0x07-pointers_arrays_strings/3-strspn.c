#include <stdio.h>
#include "main.h"
/**
 * Function that gets the length of a prefix substring
 * s - initial segment of a string
 * accept - second character string
 * return - returns n byte in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
{
	/*code goes here*/
}
for (r = 0; accept[r]; r++)
{
/* Code goes here */
}
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
s++;
}
return (n);
}
