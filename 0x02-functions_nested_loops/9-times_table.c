#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
int num1, num2, num3;
for (num1 = 0; num1 <= 9; num1++)
_putchar('0');
{
for (num2 = 1; num2 <= 9; num2++)
{
_putchar(',');
_putchar(' ');
num3 = num1 * num2;
if (num3 <= 9)
{
_putchar(' ');
}
else
_putchar((num3 / 10) + '0');


_putchar((num3 % 10) + '0');
}
}
_putchar(10);
}
