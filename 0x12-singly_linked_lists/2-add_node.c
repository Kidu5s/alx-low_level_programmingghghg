#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the first of the list
 * @str: the string to be added
 *
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *ptr;
	size_t len;

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
	if (*head == NULL)
		temp->next = NULL;
	temp->next = *head;
	*head = temp;
	return (*head);

}

/**
 * _strlen - finds the length of a string
 * @ptr: the string
 *
 * Return: the length of the string
 */
size_t _strlen(char *ptr)
{
	int i;

	for (i = 0; ptr[i]; i++)
		;
	return (i);
}
