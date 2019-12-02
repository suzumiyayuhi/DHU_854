#include<iostream>
#include<stdlib.h>
using namespace std;

struct BTnode
{
	int data;
	BTnode *lchild;
	BTnode *rchild;	
};

bool IsBTS(BTnode *a)
{
	if(a==NULL)
		return true;
	if(a->lchild||a->rchild)
	{
		if(a->lchild->data>a->data)
			return false;
		if(a->rchild->data<a->data)
			return false;
		if(IsBTS(a->lchild)==false)
			return false;
		if(IsBTS(a->rchild)==false)
			return false;
	}
	return true;
}

int main()
{
		

	BTnode *node15=(BTnode*)malloc(sizeof(BTnode));	node15->lchild=NULL;		node15->rchild=NULL;		node15->data=8;
	BTnode *node14=(BTnode*)malloc(sizeof(BTnode));	node14->lchild=NULL;		node14->rchild=NULL;		node14->data=1;
	BTnode *node13=(BTnode*)malloc(sizeof(BTnode));	node13->lchild=NULL;		node13->rchild=NULL;		node13->data=10;
	BTnode *node12=(BTnode*)malloc(sizeof(BTnode));	node12->lchild=node14;		node12->rchild=node15;		node12->data=7;
	BTnode *node11=(BTnode*)malloc(sizeof(BTnode));	node11->lchild=node12;		node11->rchild=node13;		node11->data=9;
	
	/*
	BTnode *node16=(BTnode*)malloc(sizeof(BTnode));	node16->lchild=NULL;		node16->rchild=NULL;		node16->data=4;
	BTnode *node15=(BTnode*)malloc(sizeof(BTnode));	node15->lchild=NULL;		node15->rchild=NULL;		node15->data=10;
	BTnode *node14=(BTnode*)malloc(sizeof(BTnode));	node14->lchild=NULL;		node14->rchild=NULL;		node14->data=1;
	BTnode *node13=(BTnode*)malloc(sizeof(BTnode));	node13->lchild=NULL;		node13->rchild=node16;		node13->data=3;
	BTnode *node12=(BTnode*)malloc(sizeof(BTnode));	node12->lchild=node14;		node12->rchild=node15;		node12->data=6;
	BTnode *node11=(BTnode*)malloc(sizeof(BTnode));	node11->lchild=node12;		node11->rchild=node13;		node11->data=9;
	*/
	if(IsBTS(node11))
		cout<<"true";
	else
		cout<<"false";
}
