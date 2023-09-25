#include "lists.h"

/**
 * free_listint - program to free a linked list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *count;

	while (head != NULL)
	{
		count = head;
		head = head->next;
		free(count);
	}
}
