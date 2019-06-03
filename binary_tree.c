#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	struct st *left;
	int data;
	struct st *right;
}NODE;

static NODE *HEAD=NULL;
static NODE *ptr;
static NODE *add;

void addnode(int data)
{	
	/*creating of the new node*/
	NODE *temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	
	/*checking of the  data and putting in left or right*/
	if(HEAD==NULL)
	{
		HEAD=temp;
		ptr=HEAD;
	}
	else
	{
		while(ptr)
		{
			if(temp->data<ptr->data)
			{	
				add=ptr;
				ptr=ptr->left;
			}
			else if(temp->data>ptr->data)
			{
				add=ptr;
				ptr=ptr->right;
			}
		}
		if(add->data<temp->data)
		{
			add->right=temp;
		}
		else
		{
			add->left=temp;
		}
	}
	
	
}

int main()
{
	
	addnode(10);
	addnode(9);
	addnode(8);
	addnode(11);
	addnode(12);
	printf("%d ",HEAD->right->data);
	printf("%d ",HEAD->right->data);
	return 0;
}
