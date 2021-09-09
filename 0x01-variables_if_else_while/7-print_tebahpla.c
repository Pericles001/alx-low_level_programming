#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letters in reverse followed by new line
*
*Return: return 0
*/
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
