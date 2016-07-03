#ifndef _DOUBLE_LINKED_LIST_H_
#define _DOUBLE_LINKED_LIST_H_

typedef struct node {
    int data;
    struct node* prev;
    struct node* next;
} Node;

/* extern struct node* head_init(void); */
extern int node_add(struct node** head, int data);
extern int node_del(struct node**, int data);
#endif  
