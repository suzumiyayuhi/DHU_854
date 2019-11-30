#include<iostream>
#include<queue>
#include<stdlib.h>
using namespace std;

struct BTnode
{
	int data;
	BTnode *left;
	BTnode *right;
};

void LevelOrder(BTnode *a)
{
	queue <BTnode*>q;
	int count=0;
	if(a)
	{
		q.push(a);
		while(!q.empty())
		{
			BTnode *tem=q.front();
			q.pop();
			cout<<tem->data; 
			if(tem->left)
				q.push(tem->left);		
			if(tem->right)
				q.push(tem->right);
		}
	}
}

int main()
{
	/*
	BTnode *node6=(BTnode*)malloc(sizeof(BTnode));	node6->left=NULL;	node6->right=NULL;	node6->data=6;
	BTnode *node5=(BTnode*)malloc(sizeof(BTnode));	node5->left=NULL;	node5->right=NULL;	node5->data=5;
	BTnode *node4=(BTnode*)malloc(sizeof(BTnode));	node4->left=NULL;	node4->right=NULL;	node4->data=4;
	BTnode *node3=(BTnode*)malloc(sizeof(BTnode));	node3->left=NULL;	node3->right=node6;	node3->data=3;
	BTnode *node2=(BTnode*)malloc(sizeof(BTnode));	node2->left=node4;	node2->right=node5;	node2->data=2;
	BTnode *node1=(BTnode*)malloc(sizeof(BTnode));	node1->left=node2;	node1->right=node3;	node1->data=1;
	*/
	/*
	BTnode *node5=(BTnode*)malloc(sizeof(BTnode));	node5->left=NULL;	node5->right=NULL;	node5->data=5;
	BTnode *node4=(BTnode*)malloc(sizeof(BTnode));	node4->left=NULL;	node4->right=NULL;	node4->data=4;
	BTnode *node3=(BTnode*)malloc(sizeof(BTnode));	node3->left=NULL;	node3->right=NULL;	node3->data=3;
	BTnode *node2=(BTnode*)malloc(sizeof(BTnode));	node2->left=node4;	node2->right=node5;	node2->data=2;
	BTnode *node1=(BTnode*)malloc(sizeof(BTnode));	node1->left=node2;	node1->right=node3;	node1->data=1;
	*/
	BTnode *node7=(BTnode*)malloc(sizeof(BTnode));	node7->left=NULL;	node7->right=NULL;	node7->data=7;
	BTnode *node6=(BTnode*)malloc(sizeof(BTnode));	node6->left=NULL;	node6->right=NULL;	node6->data=6;
	BTnode *node5=(BTnode*)malloc(sizeof(BTnode));	node5->left=NULL;	node5->right=NULL;	node5->data=5;
	BTnode *node4=(BTnode*)malloc(sizeof(BTnode));	node4->left=node6;	node4->right=node7;	node4->data=4;
	BTnode *node3=(BTnode*)malloc(sizeof(BTnode));	node3->left=NULL;	node3->right=NULL;	node3->data=3;
	BTnode *node2=(BTnode*)malloc(sizeof(BTnode));	node2->left=node4;	node2->right=node5;	node2->data=2;
	BTnode *node1=(BTnode*)malloc(sizeof(BTnode));	node1->left=node2;	node1->right=node3;	node1->data=1;
	
	cout<<LevelOrder(node1);
}
