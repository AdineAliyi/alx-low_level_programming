#include <stdio.h>

/**
  * main - To print all args received
  * @argc: number of args given
  * @argv: array of args given
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
