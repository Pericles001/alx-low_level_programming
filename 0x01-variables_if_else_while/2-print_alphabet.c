#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letter followed by new line
*
*Return: return 0
*/
int main(void)
{
for (int letter = 'a'; letter <= 'z' ; letter++)
{
letter = tolower(letter);
putchar(letter);
}
putchar('\n');
return (0);
}
