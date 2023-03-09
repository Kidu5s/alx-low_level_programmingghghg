#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the beginning of the list
 * @str: the string to be added
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *ptr;
	list_t *temp, *tail;
	size_t len;

	/* *head == NULL */
	tail = *head;
	if (head == NULL)
		return (NULL);

	ptr = strdup(str);
	len = _strlen(ptr);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = ptr;
	temp->len = len;
	temp->next = NULL;
	/* initializing head with a value */
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	while (tail->next != NULL)
		tail = tail->next;
	tail->next = temp;
	tail = temp;

	return (tail);
}

/**
 * _strlen - finds the length of a string
 * @ptr: the string
 *
 * Return: The length of the string
 */
size_t _strlen(char *ptr)
{
	int i;

	for (i = 0; ptr[i]; i++)
		;
	return (i);
}
