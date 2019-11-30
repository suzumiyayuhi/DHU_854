#include<iostream>
#include<stdlib.h>
using namespace std;

struct BTnode
{
	int data;
	BTnode *left;
	BTnode *right;
}; 

void Switch(BTnode *a)
{
	if(a)
	{
		BTnode *tem=a->left;
		a->left=a->right;
		a->right=tem;
		Switch(a->left);
		Switch(a->right);
	}
}


int main()
{
	/*
	BTnode *node25=(BTnode*)malloc(sizeof(BTnode));	node25->left=NULL;		node25->right=NULL;		node25->data=5;
	BTnode *node24=(BTnode*)malloc(sizeof(BTnode));	node24->left=NULL;		node24->right=NULL;		node24->data=4;
	BTnode *node23=(BTnode*)malloc(sizeof(BTnode));	node23->left=NULL;		node23->right=NULL;		node23->data=3;
	BTnode *node22=(BTnode*)malloc(sizeof(BTnode));	node22->left=node24;	node22->right=node25;	node22->data=2;
	BTnode *node21=(BTnode*)malloc(sizeof(BTnode));	node21->left=node22;	node21->right=node23;	node21->data=1;
	*/
	BTnode *node17=(BTnode*)malloc(sizeof(BTnode));	node17->left=NULL;		node17->right=NULL;		node17->data=7;
	BTnode *node16=(BTnode*)malloc(sizeof(BTnode));	node16->left=NULL;		node16->right=NULL;		node16->data=6;
	BTnode *node15=(BTnode*)malloc(sizeof(BTnode));	node15->left=NULL;		node15->right=NULL;		node15->data=5;
	BTnode *node14=(BTnode*)malloc(sizeof(BTnode));	node14->left=node16;	node14->right=node17;	node14->data=4;
	BTnode *node13=(BTnode*)malloc(sizeof(BTnode));	node13->left=NULL;		node13->right=NULL;		node13->data=3;
	BTnode *node12=(BTnode*)malloc(sizeof(BTnode));	node12->left=node14;	node12->right=node15;	node12->data=2;
	BTnode *node11=(BTnode*)malloc(sizeof(BTnode));	node11->left=node12;	node11->right=node13;	node11->data=1;
	
}
