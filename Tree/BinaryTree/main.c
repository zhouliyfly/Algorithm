#include <stdio.h>
#include "binary_tree.h"

#define MAX 100

/* 
 * 临时遍历二叉树用于输出，前序遍历 
 * 参数level表示当前节点的层数 
 */
void disp_temp(struct Node* p, int level)
{
    struct Node* tmp = p;
    if(tmp == NULL)
        return;

    else
    {
	printf("%d:",level);
        printf("%c ",p->data);
	disp_temp(p->lchild, level+1);
	disp_temp(p->rchild, level+1);
    }
}

int main()
{
    struct Node* root;    
    char s[MAX];   

    /* 读取文件，文件内容约定采用前序遍历。'#'表示当前节点为空  */
    FILE* fp = fopen("./dat.txt","r");
    
    CreateBiTree(&root, fp);
    disp_temp(root, 1);
    printf("\b \n");
    fclose(fp);
    
    return 0;
}
