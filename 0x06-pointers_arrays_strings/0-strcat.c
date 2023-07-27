#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
int j;
int k;

j = 0;
k = 0;

while (dest[j] != '\0')
{
j++;
}
while (src[k] != '\0')
{
dest[j] = src[k];
k++;
j++;
}

dest[j] = '\0';
return (dest);
}
