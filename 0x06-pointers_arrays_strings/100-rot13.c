#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: Returns the encoded string.
 */
char *rot13(char *str)
{
    int index1, index2;
    char alphabet[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot13key[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    index1 = 0;

    while (str[index1])
    {
        index2 = 0;

        while (index2 < 52)
        {
            if (str[index1] == alphabet[index2])
            {
                str[index1] = rot13key[index2];
                break;
            }
            index2++;
        }

        index1++;
    }

    return (str);
}
