#include <stdio.h>
#include "main.h"

/**
  * _strlen_recursion - finds length of string w. recursion
  * @s: the string to count
  * Return: length of string
  */
int _strlen_recursion(char *s)
{
	/* After getting the end */
	if (!s[0])
		return (0);
	/* Call the func with one less char */
	return (1 + _strlen_recursion(&s[1]));
}
