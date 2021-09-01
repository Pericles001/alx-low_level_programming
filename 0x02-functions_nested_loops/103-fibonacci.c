#include <stdio.h>
/**
*main - prints sum of even fibonacci
*suit elements
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
unsigned long n1 = 0, n2 = 1, n3;
float sum;
while (sum <= 4000000)
{
n3 = n1 + n2;
n1 = n2;
n2 = n3;

if ((n3 % 2) == 0)
sum += n3;

}
printf("%.Of\n", sum);
return (0);
}
