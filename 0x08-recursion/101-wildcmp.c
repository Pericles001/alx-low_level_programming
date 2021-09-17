#include "main.h"

/**
* wildcmp - compares two strings and returns 1 if identical
* @s1: string to be checked
* @s2: pattern to be used
*
* Return: 1 if identical, 0 otherwise
*/

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
