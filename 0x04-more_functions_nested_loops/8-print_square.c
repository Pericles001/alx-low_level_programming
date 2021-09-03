#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/
void print_square(int size)
{
int inc1, inc2;
if (size > 0)
{
for (inc1 = 0; inc1 < size; inc1++)
{
for (inc2 = 0; inc2 < (size - 1); inc2++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
