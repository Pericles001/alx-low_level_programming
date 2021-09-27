#include <stdio.h>

/**
*main - prints the name of
*the file it was compiled from
*@argc:number of input arguments
*@argv:array of outputs
*Return: nothing to be returned
*/

int main(int __attribute__((unused)) argc, char **argv)
{
printf("%s \n", argv[0]);
return (0);
}
