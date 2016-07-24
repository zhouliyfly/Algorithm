#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

/* 创建二叉树,约定按照前序遍历输入。递归实现  */
int CreateBiTree(struct Node** T, FILE* fp)
{
	char c;
	//scanf("%c", &c);

	c = fgetc(fp);
	if(c == '#')
	{
		*T = NULL;
	}
	else
	{
		*T = (struct Node*)malloc(sizeof(struct Node));
	        if(*T == NULL)
		    return -1;
		(*T)->data = c;
		CreateBiTree(&(*T)->lchild, fp);
		CreateBiTree(&(*T)->rchild, fp);
	}
	return 0;
}
