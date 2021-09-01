#include <stdio.h>
/**
*main - prints sum of even fibonacci
*suit elements
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
int inc;
unsigned long n1 = 0, n2 = 1, n3;
float sum;
while (1)
{
n3 = n1 + n2;
printf("%lu", n3);
if (n3 > 4000000)
break;

if ( n3 % 2 == 0)
sum += n3;

n1 = n2;
n2 = n3;

printf("%.0f\n", sum);
}

return (0);
}
