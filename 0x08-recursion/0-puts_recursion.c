#include <stdio.h>
#include "main.h"

/**
  * _puts_recursion - prints a string using recursion
  * @s: string to be printed
  * Return: Nothing
  */
void _puts_recursion(char *s)
{
	int i = 0;

	/* if null */
	if (!s[i])
	{
		putchar('\n');
		return;
	}

	/* This to print  the first character */
	_putchar(s[i]);

	/* call the function again */
	_puts_recursion(&s[i + 1]);
}
