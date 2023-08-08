#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - To add Positive numbers
  * @argc: number of args
  * @argv: array of args
  * Return: 0.
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* if arguments are present */
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			/* if digit */
			if (isdigit(*argv[i]))
			{
				/* als o a digit */
				sum += atoi(argv[i]);

				/* in the end */
				if (i == argc - 1)
				{
					printf("%d\n", sum);
				}
			}
			else
			{
				/* if non-digit */
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		/* no numbers */
		printf("0\n");
	}

	return (0);
}
