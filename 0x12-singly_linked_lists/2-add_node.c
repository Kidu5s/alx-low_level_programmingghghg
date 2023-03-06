#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the first of the list
 * @char: the string to be added
 *
 * Return: the address of the new element or NULL if it failed
 */
size_t _strlen(char *ptr);

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *ptr;
	size_t len;
	
	ptr = strdup(str);
	len = _strlen(ptr);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = ptr;
	temp->len = len;
	temp->next = NULL;

	temp->next = *head;
	*head = temp;

	return (*head);
	free(temp);
}
size_t _strlen(char *ptr)
{
	int i;

	for (i = 0; ptr[i]; i++)
		;
	return (i);
}
