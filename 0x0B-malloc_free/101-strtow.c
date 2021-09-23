#include "main.h"

/**
*strtow - splits a stirng into words
*@str: string to be splitted
*
*Return: pointer to the array of splitted words
*/

char **strtow(char *str)
{
char **split;
int i, j = 0, temp = 0, size = 0, words = num_words(str);

if (words == 0)
return (NULL);
split = (char **) malloc(sizeof(char *) * (words + 1));
if (split != NULL)
{
for (i = 0; i <= len(str) && words; i++)
{
if ((str[i] != ' ') && (str[i] != '\0'))
size++;
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
split[j] = (char *) malloc(sizeof(char) * size + 1);
if (split[j] != NULL)
{
while (temp < size)
{
split[j][temp] = str[(i - size) +temp];
temp++;
}
split[j][temp] = '\0';
size = temp = 0;
j++;
}
else
{
while (j-- >= 0)
free(split[j]);
free(split);
return (NULL);
}
}
}
split[words] = NULL;
return (split);
}
else
return (NULL);
}


/**
* num_words - counts the number of words in str
*@str: string to be used
*
*Return: number of words
*/
int num_words(char *str)
{
int i = 0, words = 0;

while (i <= len(str))
{
if ((str[i] != ' ') && (str[i] != '\0'))
{
i++;
}
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
words += 1;
i++;
}
else
{
i++;
}
}
return (words);
}

/**
* len - returns length of str
*@str: string to be counted
*
* Return: length of the string
*/

int len(char *str)
{
int len = 0;

if (str != NULL)
{
while (str[len])
len++;
}
return (len);
}
