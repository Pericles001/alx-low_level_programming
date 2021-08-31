#include <stdio.h>
void print_alphabet(void);
/**
*main - function that print alphabet letters
*it uses another function call
*Return: returns 0
*/
int main(void)
{
print_alphabet();
return (0);
}
/**
*print_alphabet - function that print alphabet
*it prints in lowercase
*Return: no return
*/
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar (letter);
}
putchar (10);
}
