#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

struct node {
	int data;
	struct node *link;
};
struct node *add_beg(struct node **head, int d);
struct node *add_end(struct node **head, int d);

int main(void)
{
	struct node *head;

	head = malloc(sizeof(struct node));
	head->data = 1;
	head->link = NULL;

	struct node *ptr;

	ptr = malloc(sizeof(struct node));
	ptr->data = 2;
	ptr->link = NULL;
	head->link = ptr;

	head = add_beg(&head, 3);
	head = add_beg(&head, 4);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");

	struct node *tail;
	
	tail = malloc(sizeof(struct node));
	tail = add_end(&head, 3);
	tail = add_end(&head, 4);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
	return (0);
}
struct node *add_beg(struct node **head, int d)
{
	struct node *ptr;

	ptr = malloc(sizeof(struct node));
	ptr->data = d;
	ptr->link = NULL;

	ptr->link = *head;
	*head = ptr;
	return (*head);
}

struct node *add_end(struct node **head, int d)
{
	struct node *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(struct node));
	temp->data = d;
	temp->link = NULL;

	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
	return (ptr);
}
