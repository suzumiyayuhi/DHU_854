#include<iostream>
#include<stdlib.h>
using namespace std;

struct treeNode
{
	int data;
	treeNode *child;
	treeNode *cousin;
};

int LeafCount(treeNode *node)
{
	if(node->child==NULL)
		return 1;
	else
	{
		int sum=0;
		for(treeNode *temNode=node->child;temNode;temNode=temNode->cousin)
			sum+=LeafCount(temNode);
		return sum;
	}
}

int main()
{
	/*
	treeNode *node7=(treeNode*)malloc(sizeof(treeNode));node7->data=7; node7->child=NULL;	node7->cousin=NULL;
	treeNode *node6=(treeNode*)malloc(sizeof(treeNode));node6->data=6; node6->child=NULL;	node6->cousin=node7;
	treeNode *node5=(treeNode*)malloc(sizeof(treeNode));node5->data=5; node5->child=NULL;	node5->cousin=NULL;
	treeNode *node4=(treeNode*)malloc(sizeof(treeNode));node4->data=4; node4->child=node6;  node4->cousin=NULL;
	treeNode *node3=(treeNode*)malloc(sizeof(treeNode));node3->data=3; node3->child=NULL;	node3->cousin=node4;
	treeNode *node2=(treeNode*)malloc(sizeof(treeNode));node2->data=2; node2->child=node5;	node2->cousin=node3;
	treeNode *node1=(treeNode*)malloc(sizeof(treeNode));node1->data=1; node1->child=node2;	node1->cousin=NULL;
	cout<<LeafCount(node1)<<endl;
	*/
	 treeNode *node11=(treeNode*)malloc(sizeof(treeNode));	node11->data=11; node11->child=NULL;	node11->cousin=NULL;
	 treeNode *node10=(treeNode*)malloc(sizeof(treeNode));	node10->data=10; node10->child=NULL;	node10->cousin=node11;
	 treeNode *node9=(treeNode*)malloc(sizeof(treeNode));	node9->data=9;	 node9->child=NULL;		node9->cousin=node10;
	 treeNode *node8=(treeNode*)malloc(sizeof(treeNode));	node8->data=8;	 node8->child=node9;	node8->cousin=NULL;
	 treeNode *node7=(treeNode*)malloc(sizeof(treeNode));	node7->data=7;	 node7->child=NULL;		node7->cousin=node8;
	 treeNode *node6=(treeNode*)malloc(sizeof(treeNode));	node6->data=6;	 node6->child=NULL;		node6->cousin=NULL;
	 treeNode *node5=(treeNode*)malloc(sizeof(treeNode));	node5->data=5;	 node5->child=node6;	node5->cousin=NULL;
	 treeNode *node4=(treeNode*)malloc(sizeof(treeNode));	node4->data=4;	 node4->child=node7;	node4->cousin=NULL;
	 treeNode *node3=(treeNode*)malloc(sizeof(treeNode));	node3->data=3;	 node3->child=NULL;		node3->cousin=node4;
	 treeNode *node2=(treeNode*)malloc(sizeof(treeNode));	node2->data=2;	 node2->child=node5;	node2->cousin=node3;
	 treeNode *node1=(treeNode*)malloc(sizeof(treeNode));	node1->data=1;	 node1->child=node2;	node1->cousin=NULL;
	 cout<<LeafCount(node1)<<endl;
}

