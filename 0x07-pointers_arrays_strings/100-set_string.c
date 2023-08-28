#include <stdio.h>
#include "main.h"
/**
 * _string - function to set the value of a pointer to char
 * s - string
 * to - value to point to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
