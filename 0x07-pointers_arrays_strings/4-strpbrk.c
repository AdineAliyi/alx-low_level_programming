#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - searches a string for any char in a set of bytes
  * @s: the string within which to search
  * @accept: the set of bytes to search for
  * Return: a pointer to the byte in s that matches a byte in accept
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
