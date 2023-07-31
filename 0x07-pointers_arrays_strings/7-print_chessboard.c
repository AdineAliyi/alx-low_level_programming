#include <main.h>
#include <stdio.h>

/**
  * print_chessboard - prints THE chessboard
  * @a: a 2D array representation of the chess board
  * Return: not a thing
  */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
