#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all combinations of two digits with,
* and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 < 10; digit1++)
{
for (digit2 = 1; digit2 < 10; digit2++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');

if (digit1 == 9 && digit2 == 9)
continue;

putchar(',');
putchar(' ');

}


}
putchar('\n');
return (0);
}
