#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left,*right;
};
typedef struct node nd;

nd* addnode(int n){

	nd* temp = (nd*)malloc(sizeof(nd));
	temp->data = n;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

void preorder(nd* root){
   int top=-1;
   nd *s[10];
   s[++top]=root;
   nd *x;
   while(top>-1)
   {
   	  x=s[top--];
   	  printf("%d",x->data);
   	  if(x->right!=NULL)
   	  s[++top]=x->right;
   	  if(x->left!=NULL)
   	  s[++top]=x->left;
   }
	
}

int main()
{
   nd *root;
   root = addnode(10);
   root->left = addnode(9);
   root->right = addnode(8);
   root->left->left = addnode(7);
   root->left->right = addnode(3);
   root->left->right->left = addnode(17);
   root->right->left = addnode(5);
   
   preorder(root);
   
   }
   
