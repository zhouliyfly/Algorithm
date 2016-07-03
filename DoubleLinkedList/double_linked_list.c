#include <stdlib.h>
#include "double_linked_list.h"

/*
struct node* head_init(void)
{
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->prev = NULL;
    head->next = head;

    return head;
}
*/
int node_add(struct node** head, int data)
{
    if(head == NULL)
        return -1;

    if(*head == NULL)
    {
        *head = (struct node*)malloc(sizeof(struct node));
	(*head)->data = data;
	(*head)->prev = NULL;
	(*head)->next = NULL;

	return 0;
    }
    struct node* p = *head;
    while(p->next != NULL)
    {
        p = p->next;
    }
    struct node* tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = data;
    tmp->prev = p;
    p->next = tmp;

    return 0;
}

int node_del(struct node** head, int data)
{
    if(head == NULL || *head == NULL)
        return -1;

    struct node* p = *head;

    while((p != NULL) && (p->data != data))
    { 
        p = p->next;
    }

    if(p == *head)
    {
	*head = p->next;
	(*head)->prev = NULL;
	free(p);

	return 0;
    }

    if(p->data == data)
    {
        p->prev->next = p->next;
	p->next->prev = p->prev;
	free(p);

	return 0;
    }

    return -1;
}
