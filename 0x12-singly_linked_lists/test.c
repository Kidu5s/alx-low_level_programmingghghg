#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
};

struct node *add_beg(struct node **head, int d);
int main(void)
{
	struct node *head;

	head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *ptr;

	ptr = malloc(sizeof(struct node));
	ptr->data = 98;
	ptr->link = NULL;

	head->link = ptr;
	int data = 3;
	int data2 = 4;
	int data3 = 5;

	head = add_beg(&head, data);
	head = add_beg(&head, data2);
	head = add_beg(&head, data3);
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
	ptr->link = *head;
	*head = ptr;
	return (*head);
}

