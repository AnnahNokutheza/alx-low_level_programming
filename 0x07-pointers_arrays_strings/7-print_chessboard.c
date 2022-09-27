#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: array of pieces
 *
 *  Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int l, m;


	for (l = 0; l < 8; l++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[l][m]);
		}

		_putchar('\n');
	}
}
