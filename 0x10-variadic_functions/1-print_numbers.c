#include "variadic_functions.h"

/**
 * print_numbers - To print numbers
 * @separator: the string to print between numbers
 * @n: number of expected args
 * @...: the args
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(args);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
