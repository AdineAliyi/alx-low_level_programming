#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int x;

	while (x < 10)
	{
	putchar(48 + x);
	if (x != 9)
	{
	putchar(',');
	putchar(' ');
	}
	x++;
	}
	putchar('\n');
	return (0);
}
