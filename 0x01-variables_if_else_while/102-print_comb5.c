#include <stdio.h>
/**
*main - Prints all combinations of two two digits with,
* and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 < 98; digit1++)
{
for (digit2 = digit1 + 1 ; digit2 < 99; digit2++)
{
putchar((digit1 / 10) + '0');
putchar((digit1 % 10) + '0');
putchar(' ');
putchar((digit2 / 10) + '0');
putchar((digit2 % 10) + '0');

if (digit1 == 98 && digit2 == 99)
continue;

putchar(',');
putchar(' ');

}


}
putchar('\n');
return (0);
}
