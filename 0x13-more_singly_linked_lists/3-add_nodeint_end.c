#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_one;
	listint_t *link = *head;

	node_one = malloc(sizeof(listint_t));
	if (node_one != NULL)
	{
		node_one->n = n;
		node_one->next = NULL;
	}
	else
		return (NULL);
	if (link != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		link->next = node_one;
	}
	else
		*head = node_one;
	return (node_one);
}
