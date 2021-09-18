#include <stdio.h>

/**
* main - prints multiplication
*of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc <= 2)
		printf("Error\n");
	else
	{

		for (i = 1; i < argc; i++)
			mul *= argv[i][0] - '0';
		printf("%d \n", mul);
	}

	return (0);
}
