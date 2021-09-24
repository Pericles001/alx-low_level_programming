#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *target;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	target = malloc(nmemb * size);

	if (target != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			target[i] = 0;
		return (target);
	}
	else
		return (NULL);

}