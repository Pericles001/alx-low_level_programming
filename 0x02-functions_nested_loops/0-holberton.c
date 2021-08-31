#include "main.h"

/**
*main - function prints text as output
*
*Return:return 0
*/
int main(void)
{
char school[9] = "Holberton";
int i;
for(i = 0; i <= 9; i++)
{
_putchar(school[i]);
}
_putchar(10);
return (0);
}
