#include "lists.h"


/**
 *print_listint - Prints all the elements of a listint_t list.
 *@h: A pointer to the head of the list_t list.
 *
 *
 *Return: The number of nodes in the list_t list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}