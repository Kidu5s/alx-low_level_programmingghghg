#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer that pointes to a pointer that holds the address
 * of the first item on the list
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	ptr = *head;
	if (head == NULL)
		return;
	if (*head == NULL)
	{
		return;
	}
	while (ptr->next != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	free(ptr);
	ptr = NULL;
}
