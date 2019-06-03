#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	struct st *left;
	int data;
	struct st *right;
}NODE;

NODE *root=NULL;

NODE*newnode(int data)
{
	NODE*temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

NODE * insert(NODE *root,int data)
{
	if(root==NULL)
	{
		root=newnode(data);
	}
	else if(data<=root->data)
	{
		root->left=insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);	
	}
	return root;	
}

void display(NODE*root)
{
	if(root!=NULL)
	{
		display(root->left);
		printf("%d ",root->data);
		display(root->right);
		
		/*display(root->right);
		printf("%d ",root->data);
		display(root->left);*/
		
		/*printf("%d ",root->data);
		display(root->left);
		display(root->right);*/
		
		
	}
}

int main()
{
	
	root=insert(root,5);
	root=insert(root,4);
	insert(root,3);
	insert(root,6);
	insert(root,7);
	insert(root,8);
	insert(root,20);
	insert(root,10);
		//printf("%p ",root);
	insert(root,30);
	insert(root,1);
		//printf("%p ",root);
		/*insert(root,20);
		insert(root,10);
		insert(root,30);*/	
	/*printf("%d ",root->data);
	printf("%d ",root->left->data);
	printf("%d ",root->right->data);*/
	
	display(root);
	return 0;
}
