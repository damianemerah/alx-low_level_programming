#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: Matrix 8,8
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8; i++)
	{
		for (; j < 8; j++)
		{
			_putchar(a[i][j])
		}
		_putchar('\n');
	}
}
