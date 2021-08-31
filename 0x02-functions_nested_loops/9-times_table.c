#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
int digit, mult, result;
for (digit = 0; digit <= 9; digit++)
{
for (mult = 0;  mult <= 9; mult++)
{
result = digit * mult;
if (result > 9)
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
_putchar(' ');
_putchar(result + '0');
}

if (mult != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
