#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_

typedef char Elemtype;

typedef struct Node
{
	Elemtype data;
	struct Node* lchild;
	struct Node* rchild;
}Node, *pNode;

//extern int CreateBiTree(struct Node** T, Elemtype* edata);
extern int CreateBiTree(struct Node** T, FILE* fp);

#endif /*_BINARY_TREE_H_*/
