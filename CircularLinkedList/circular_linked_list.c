#include <stdlib.h>
#include "circular_linked_list.h"

int node_add(struct node** head, int data)
{
    if(head == NULL)
        return -1;

    if(*head == NULL)
    {
        *head = (struct node*)malloc(sizeof(struct node));
        (*head)->data = data;
	(*head)->prev = *head;
	(*head)->next = *head;

	return 0;
    }

    struct node* p = (*head);

    while(p->next != (*head))
    {
        p = p->next;
    }

    p->next = (struct node*)malloc(sizeof(struct node)); 
    p->next->data = data;
    p->next->next = (*head);
    p->next->prev = p;
    (*head)->prev = p->next;

    return 0; 
}

int node_del(struct node** head, int data)
{
    if((head == NULL) || (*head == NULL))
        return -1;
    
    struct node* p = *head;
    if(p->data == data)
    {
        if(p->next == p)
	{
            *head == NULL;
	    free(p);
	}
	else
	{
            p->next->prev = p->prev;
	    p->prev->next = p->next;
	    *head = p->next;
	    free(p);
	}

	return 0;
    }

    do {
        p = p->next;
    }while((p->data != data) && (p != *head));

    if(p->data == data);
    {
        p->next->prev = p->prev;
	p->prev->next = p->next;
	free(p);

	return 0;
    }

    return -1;

}

