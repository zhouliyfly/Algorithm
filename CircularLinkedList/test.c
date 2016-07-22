#include <stdio.h>
#include "circular_linked_list.h"

void display_node(struct node* head)
{
    if(head == NULL)
        return;
    
    struct node* p = head;

    do {
        printf("%d ", p->data);
	p = p->next;
    }while(p != head);

    printf("\n");
}

void display_reverse_node(struct node* head)
{
    if(head == NULL)
        return;
    
    struct node* p = head;

    do {
        printf("%d ", p->data);
	p = p->prev;
    }while(p != head);

    printf("\n");
}

int main()
{
    struct node* head = NULL;
    int i;

    for(i=0; i<5; i++)
    {
        node_add(&head, i);
    }
    display_node(head);
    display_reverse_node(head);

    node_del(&head, 4);
    display_node(head);

    node_del(&head,0);
    display_node(head);



    return 0;
}
