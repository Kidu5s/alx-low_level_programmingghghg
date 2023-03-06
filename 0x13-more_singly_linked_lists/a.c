#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the first item in the list
 * @n: integer
 *
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *tail;

	if (head == NULL)
		return (NULL);
	tail = *head;
	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = temp;
	return (tail);
}
