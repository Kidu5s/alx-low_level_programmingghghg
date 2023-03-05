#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (i);
}
