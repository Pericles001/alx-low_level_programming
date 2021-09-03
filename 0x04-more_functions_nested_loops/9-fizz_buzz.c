#include "main.h"
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
for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
printf("fizzBuzz");

else if ((num % 3) == 0)
printf("Fizz");

else if ((num % 5) == 0)
printf("Buzz");

else
printf("%d ", num);

if (num == 100)
continue;

printf(" ");
}

printf("\n");
return (0);

}
