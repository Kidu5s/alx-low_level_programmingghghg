#include "lists.h"

/**
 * pop_listint - delets the head node of a listint_t list
 * @head: holds the address of the address of the first item in the list
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	temp->next = NULL;

	return (temp->n);
}
