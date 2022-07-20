#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: array of pieces
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
int x = 0, y;

while (x < 8)
{
for (y = 0; y < 8; y++)
{
_putchar(a[x][y]);
}
_putchar('\n');
x++;
}
}
