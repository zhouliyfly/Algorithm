#ifndef _CIRCULAR_LINKED_LIST_H_
#define _CIRCULAR_LINKED_LIST_H_

typedef struct node {
    int data;
    struct node* prev;
    struct node* next;
}Node;

extern int node_add(struct node** head, int data);
extern int node_del(struct node** head, int data);

#endif
