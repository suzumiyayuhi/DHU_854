#include<iostream>
#include<stdlib.h>
using namespace std;

struct xnode
{
	int data;
	xnode *next;
};

xnode* Create()
{
	int tem;
	xnode *head=(xnode*)malloc(sizeof(xnode));
	xnode *temNode1=head;
	xnode *temNode2,*temNode3; 
	while(cin>>tem,tem!=-1)//ÊäÈë-1½áÊø 
	{
		
		temNode1->data=tem;
		temNode2=(xnode*)malloc(sizeof(xnode));
		temNode3=temNode1;
		temNode1->next=temNode2;
		temNode1=temNode2;
	}
	temNode3->next=NULL;
	
	return head;
}

void PrintListNodes(xnode *n)
{
	while(n)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
	cout<<endl;
}

///////////////////////////////////////////////////
//Ëã·¨ 
void Distinct(xnode *cur)
{
	while(cur)
	{
		xnode *tem=cur->next;
		if(tem==NULL)
			break;
		if(tem->data==cur->data)
			cur->next=tem->next;
		cur=cur->next;
	}
}
///////////////////////////////////////////////////

int main()
{
	xnode *a=Create();
	PrintListNodes(a);
	Distinct(a);
	PrintListNodes(a);
} 
