#include <stdio.h>
#include "main.h"
/**
 * _strsts - Function to find the first occurence in a substring
 * haystack - string
 * needle - substring
 * returns -  pointer to the begining of the substring or null is the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)

		char *l = haystack;

	char *p = needle;
	while (*l == *p && *p != '\0')
	{
		l++;
		p++;
	}

	if (*p == '\0')
		return (haystack);

	return (0);
}
