#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function to calculate the sum of all data (n) of a linked list
 * @head : pointer to the head of the list
 * Return: sum of all the data (n),
 *         or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
