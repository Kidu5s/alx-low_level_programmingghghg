#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	int data;
	struct node *link;
} node_t;
node_t *add_at_end(node_t **head, int data);
int main(void)
{
	node_t *head, *ptr;

	head = malloc(sizeof(node_t));
	head->data = 1;
	head->link = NULL;

	head = add_at_end(&head, 67);
	head = add_at_end(&head, 78);
	
	ptr = malloc(sizeof(node_t));

	ptr->data = 2;
	ptr->link = NULL;

	ptr = head;

	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
	return (0);
}
node_t *add_at_end(node_t **head, int data)
{
	node_t *ptr, *temp;
	
	ptr = *head;
	temp = malloc(sizeof(node_t));

	temp->data = data;
	temp->link = NULL;

	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = temp;
	return (ptr);
}
