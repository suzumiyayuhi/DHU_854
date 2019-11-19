#include<iostream>
#include<stdlib.h>
using namespace std;

struct xnode
{
	int val;
	xnode *next;
};

xnode* Create()
{
	xnode *head=NULL,*tem1;
	int x;
	while(cin>>x,x!=-1)
	{
		tem1=(xnode*)malloc(sizeof(xnode));
		tem1->val=x;
		tem1->next=head;
		head=tem1;
	}
	return head;
}


void PrintList(xnode *a)
{
	while(a)
	{
		cout<<a->val<<" ";
		a=a->next;
	}
	cout<<endl;
}

xnode* Partition(xnode *L1)
{
	xnode *L2=NULL,*L3,*L4,*tem=L1;
	int i=1;
	while(tem&&tem->next)
	{
		L3=tem->next;
		tem->next=tem->next->next; 
		L3->next=L2;
		L2=L3;
		tem=tem->next;
	}
	return L2;
} 

int main()
{
	xnode *a=Create();
	PrintList(a);
	xnode *b=Partition(a);
	PrintList(a);
	PrintList(b);
}
