#include "main.h"
/**
*print_chessboard - a function that prints the chessboard.
*returns nothing
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for ( i = 0; a[i][7]; i++)
	{
		for ( j = 0; j < 8; j++)
			_putchar(a[i][j]);
		
		_putchar('\n');
	}
	
}