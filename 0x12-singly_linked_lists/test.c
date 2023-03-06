#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/*
struct node {
	char *data;
	struct node *link;
};
struct node *add_beg(struct node **head, char *str);
struct node *print_list(struct node *head);
*/
int main(void)
{
	/*
	struct node *head;*/
	list_t *head;

	head = NULL;
	add_node(&head, "Alexandro");
	add_node(&head, "one");
	add_node(&head, "two");
	print_list(head);

	return (0);
}
/*
struct node *print_list(struct node *head)
{
	struct node *ptr;

	ptr = malloc(sizeof(struct node));

	ptr = head;
	
	while (ptr != NULL)
	{
		printf("%s ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
	return (0);
}
struct node *add_beg(struct node **head, char *str)
{
	struct node *ptr;
	char *pttr;

	pttr = strdup(str);
	ptr = malloc(sizeof(struct node));
	ptr->data = pttr;
	ptr->link = NULL;

	ptr->link = *head;
	*head = ptr;
	return (*head);
}
*/
