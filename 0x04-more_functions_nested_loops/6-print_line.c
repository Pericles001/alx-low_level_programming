#include "main.h"
/**
*print_line - prints a straight line
*@n:parameter
*Return:returns nothing
*/
void print_line(int n)
{
int inc;

if (n <= 0)
_putchar(10);

for (inc = 0; inc < n; inc++)
{
_putchar('_');
}
_putchar(10);
}
