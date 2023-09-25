#include "lists.h"

/**
 * print_listint - prints elements in the linked list
 * @h: the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->x);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
