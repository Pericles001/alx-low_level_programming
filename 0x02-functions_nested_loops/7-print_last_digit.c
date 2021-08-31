#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns 0
*/
int print_last_digit(int n)
{
int lastdigit = n % 10;
if (lastdigit < 0)
lastdigit *= -1;

_putchar (lastdigit + '0');
return (lastdigit);
}
