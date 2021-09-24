#include "main.h"

/**
*malloc_checked - allocates memory using malloc, exit(98)
*@b: size of the block being allocated
*Return: pointer to the address of the block
*/

void *malloc_checked(unsigned int b)
{
	void *target;

	target = malloc(b);

	if (target == NULL)
		exit(98);

	return (target);
}