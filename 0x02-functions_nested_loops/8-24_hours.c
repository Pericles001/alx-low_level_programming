#include "main.h"
/**
*24_hours - prints each minute of the day
*
*Return:returns 0
*/
void 24_hours (void)
{
int min, hour;
for (hour = 0; hour < 23; hour ++)
{
for (min = 0; min < 59; min++)
{
_putchar (hour / 10 + '0');
_putchar (hour %10 + '0');
_putchar (':');
_putchar (min / 10 + '0' );
_putchar (min %10 + '0');
}
}

}
