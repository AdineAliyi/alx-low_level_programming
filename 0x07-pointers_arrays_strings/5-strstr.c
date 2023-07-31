#include "main.h"
#include <stdio.h>
/**
  * _strstr - locates a substring
  * @haystack: the parent string
  * @needle: string to be located
  * Return: pointer to needle if found else NULL
  */
char *_strstr(char *haystack, char *needle)
{
	Wchar *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
