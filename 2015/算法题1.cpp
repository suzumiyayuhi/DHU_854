#include<iostream>
#include<stdlib.h>
using namespace std;

struct BTnode
{
	int data;
	BTnode *left;
	BTnode *right;
};

int BTHeight(BTnode *a)
{
	int height=0,lheight,rheight;
	if(a==NULL)
		return 0;
	else
	{
		height++;
		lheight=BTHeight(a->left);
		rheight=BTHeight(a->right);
		height+=lheight>rheight?lheight:rheight;
	}
	return height;
}

int main()
{
	
	BTnode *node17=(BTnode*)malloc(sizeof(BTnode));	node17->left=NULL;		node17->right=NULL;		node17->data=7;
	BTnode *node16=(BTnode*)malloc(sizeof(BTnode));	node16->left=NULL;		node16->right=NULL;		node16->data=6;
	BTnode *node15=(BTnode*)malloc(sizeof(BTnode));	node15->left=NULL;		node15->right=NULL;		node15->data=5;
	BTnode *node14=(BTnode*)malloc(sizeof(BTnode));	node14->left=node16;	node14->right=node17;	node14->data=4;
	BTnode *node13=(BTnode*)malloc(sizeof(BTnode));	node13->left=NULL;		node13->right=NULL;		node13->data=3;
	BTnode *node12=(BTnode*)malloc(sizeof(BTnode));	node12->left=node14;	node12->right=node15;	node12->data=2;
	BTnode *node11=(BTnode*)malloc(sizeof(BTnode));	node11->left=node12;	node11->right=node13;	node11->data=1;
	/*
	BTnode *node15=(BTnode*)malloc(sizeof(BTnode));	node15->left=NULL;		node15->right=NULL;		node15->data=5;
	BTnode *node14=(BTnode*)malloc(sizeof(BTnode));	node14->left=node15;	node14->right=NULL;	node14->data=4;
	BTnode *node13=(BTnode*)malloc(sizeof(BTnode));	node13->left=NULL;		node13->right=NULL;		node13->data=3;
	BTnode *node12=(BTnode*)malloc(sizeof(BTnode));	node12->left=node14;	node12->right=NULL;	node12->data=2;
	BTnode *node11=(BTnode*)malloc(sizeof(BTnode));	node11->left=node12;	node11->right=node13;	node11->data=1;
	*/
	cout<<BTHeight(node11);
}
