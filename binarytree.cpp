#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *lc;
	struct node *rc;
	struct node *p;
};
typedef struct node nd;
void inorder(nd *ptr)
 {  if(ptr==NULL)
     return;
    inorder(ptr->lc);
    
 	inorder(ptr->rc);
 	if(ptr!=NULL)
 	printf("%d",ptr->data);
 	
 }
int main()
{
   nd  *n1,*n2,*n3,*n4;
   n1=(nd *)malloc(sizeof(nd));
   n2=(nd *)malloc(sizeof(nd));
   n3=(nd *)malloc(sizeof(nd));
   n4=(nd *)malloc(sizeof(nd));
   n1->data=4;
   n1->lc=n2;
   n1->rc=NULL;
   n2->data=5;
   n2->lc=n3;
   n2->rc=n4;
   n3->data=7;
   n3->lc=NULL;
   n3->rc=NULL;
   n4->data=6;
   n4->lc=NULL;
   n4->rc=NULL;
     inorder(n1);
}

