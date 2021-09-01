#include <stdio.h>
/**
*main - prints out first 50
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
int n1 = 0, n2 = 1, n3, inc;
for (inc = 0; inc < 50; inc++)
{
n3 = n1 + n2;
printf("%d, ", n3);
n1 = n2;
n2 = n3;

if (inc == 49)
printf("%d\n", n3);
}

return (0);
}
