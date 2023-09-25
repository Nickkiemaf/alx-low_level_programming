#include "lists.h"
/**
 * free_listint2 - function to free the linked list
 * @head : pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *count;

	if (head == NULL)
		return;

	while (*head)
	{
		count = *head;
		*head = (*head)->next;
		free(count);
	}
	head = NULL;
}
