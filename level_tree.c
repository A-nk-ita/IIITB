#include<stdio.h>
#include<malloc.h>
struct node
{
	int data,l;
	struct node *left,*right;
};
typedef struct node nd;

nd* addnode(int n){

	nd* temp = (nd*)malloc(sizeof(nd));
	temp->data = n;
	temp->l = 0;
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
   	  printf("(%d,%d) ",x->data,x->l);
   	  if(x->right!=NULL)
   	  s[++top]=x->right;
   	  if(x->left!=NULL)
   	  s[++top]=x->left;
   }
	
}

void level (nd *root)
{
	nd *tm=root;
	if(tm==NULL)
		return;
	else
	{
		if(tm->left!=NULL)
		  {
			tm->left->l=tm->l+1;
			level(tm->left);
		  }
		
		if(tm->right!=NULL)
		  {
			 tm->right->l=tm->l+1;
			 level(tm->right);
		  }
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
   root->l=0;
   level(root);
   preorder(root);
   }

