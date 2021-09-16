#include "main.h"
/**
* _strlen_recursion - gives length of a string
* @s: string to be measured
*Return: length of the string
*/

int _strlen_recursion(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}