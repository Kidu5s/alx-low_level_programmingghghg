#ifndef TEST_H
#define TEST_H

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

typedef struct node
{
        int info;
        struct node *next;
} t_node;

#endif /* TEST_H */
