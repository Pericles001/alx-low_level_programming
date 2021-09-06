#include "main.h"
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
int inc;
for (inc = 0;   str[inc] != '\0'; inc++)
_putchar(str[inc]);

_putchar('\n');
}