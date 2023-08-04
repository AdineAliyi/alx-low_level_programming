#include <stdio.h>
#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse using recursion
  * @s: the string to print
  * Return: nothing
  */
void _print_rev_recursion(char *s)
{
	int i = 0;

	/* to get terminator? */
	if (!s[i])
		return;

	/* call again */
	_print_rev_recursion(&s[i + 1]);

	/* if s[i] is valid, print */
	_putchar(s[i]);
}
