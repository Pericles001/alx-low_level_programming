#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
char *password;
int i;
srand(times(0));
while (i <= 2465)
{
password = rand() % 128;
i += password;
_putchar(password);
}
_putchar(2772 - i);
return (0);
}
