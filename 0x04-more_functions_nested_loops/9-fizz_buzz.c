#include <stdio.h>
/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/
int main(void)
{
int num;
while (num++ < 100)

if ((num % 3 == 0) && (num % 5 == 0))
printf("FizzBuzz ");

else if ((num % 3) == 0)
printf("Fizz ");

else if ((num % 5) == 0)
{
if (num != 100)
printf("Buzz ");

else
printf("Buzz");
}

else
printf("%d ", num);

printf("\n");
return (0);
}
