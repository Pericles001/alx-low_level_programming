#include <stdio.h>

/**
* main - prints the number of arguments
*@argc: number of arguments
*@argv:array of arguments
*Return: the number of arguments
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
