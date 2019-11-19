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
/*
BTnode* InitTree()
{
	BTnode *mid=new BTnode();
	char tem;
	cin>>tem;
	if(tem!='#')
	{
		mid->data=tem;
		mid->left=InitTree();
		mid->right=InitTree();
	}
	else
	{
		delete(mid);
		return NULL;
	}
	return mid;
}
*/

bool IsCompleteBT(BTnode *a)
{
	queue <BTnode*>q;
	if(a)
	{
		q.push(a);
		bool flag=false;
		while(!q.empty())
		{
			BTnode *tem=q.front();
			q.pop();
			cout<<tem->data<<endl;
			if((tem->left==NULL)&&tem->right)
				return false;
			else if(tem->left&&(tem->right==NULL))
				if(flag)
					return false;
				else
					flag=true;
			else if((tem->left==NULL)&&(tem->right==NULL))
				flag=true;
			else if(tem->left&&tem->right)
				if(flag)
					return false;
			if(tem->left)
				q.push(tem->left);		
			if(tem->right)
				q.push(tem->right);
		}
	}
	return true;
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
	if(IsCompleteBT(node1))
		cout<<"yes"<<endl; 
	else
		cout<<"no"<<endl;
}
