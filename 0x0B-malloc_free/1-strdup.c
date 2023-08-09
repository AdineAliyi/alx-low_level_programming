#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
int i, j;
	char *dupe;

	if (!str)
	return (NULL);

	j = strlen(str);
	dupe = malloc(j * sizeof(char) + 1);

	if (dupe)
	{
		for (i = 0; i < n; i++)
			*(dupe + i) = *(str + i);
	}
	return (dupe);
}
