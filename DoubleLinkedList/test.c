#include <stdio.h>
#include "double_linked_list.h"

void linked_list_display_reverse(struct node* head)
{
    if(head == NULL)
        return;

    struct node* p = head;
    while(p->next != NULL)
    {
	p = p->next;
    }

    while(p->prev != NULL)
    {
       printf("%d ", p->data);
       p = p->prev;
    }
    printf("%d\n", p->data);
}

void linked_list_display(struct node* head)
{
    if(head == NULL)
        return;

    struct node* p = head;
    do
    {
        printf("%d ", p->data);
	p = p->next;
    }while(p != NULL);
    printf("\n");
}

int main()
{
    int i;
    struct node* head = NULL;
    
    for(i=0; i<5; i++)
    {
        node_add(&head, i);
    }

    linked_list_display(head);
    linked_list_display_reverse(head);
    
    node_del(&head, 0);
    linked_list_display(head);

    
    node_del(&head, 3);
    linked_list_display(head);

    return 0;
}
