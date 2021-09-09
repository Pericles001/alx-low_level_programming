#include "main.h"

/**
*string_toupper - changes all lowercases letters of a string to uppercase
*@str: parameter
*Return: returns a character
*/

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
