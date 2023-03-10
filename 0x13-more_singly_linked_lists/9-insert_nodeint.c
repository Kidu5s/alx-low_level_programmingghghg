#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer that holds the address of the first element of the list
 * @idx: the index
 * @n: the item to be added
 *
 * Return: the address of the new node
 * NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *temp2, *temp3;
	unsigned int i = 0;

	temp = *head;

	temp3 = malloc(sizeof(listint_t));
	temp3->n = n;
	temp3->next = NULL;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		else
			temp = temp->next;
	}
	temp2 =	temp->next;
	temp->next = temp3;
	temp3->next = temp2;

	return (temp3);
}



