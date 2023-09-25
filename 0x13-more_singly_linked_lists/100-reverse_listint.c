#include "lists.h"

/**
 * reverse_listint - function to reverse the linked list.
 * @head: the head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *n;

	a = NULL;
	b = NULL;

	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}

	*head = a;
	return (*head);
}
