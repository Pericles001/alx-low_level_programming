#include "main.h"
/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/
void more_numbers(void)
{
int number;
for (number = 0; number <= 10; number++)
{
for (number = 48; number <= 58; number++)
{
_putchar(number);

if (number == 58)
{
number = 0;
for (; number < 55; number++)
{
_putchar(49);
_putchar(number);
break;
}
}
}
_putchar(10);
}
}
