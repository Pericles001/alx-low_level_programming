#include "variadic_functions.h"

/**
*print_numbers - prints numbers followed by
*new line
*@separator: string to be printed between numbers
*@n: number of integer to be passed
*
*Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list li;
unsigned int i;

va_start(li, n);

for (i = 0; i < n; i++)
{


printf("%d", va_arg(li, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(li);

}
