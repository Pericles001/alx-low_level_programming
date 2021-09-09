#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all single digits with , and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
