#include<iostream>
#include<stdlib.h>
using namespace std;

struct dnode
{
	int data;
	int feq;
	dnode *next;
	dnode *prev;
};

dnode* Create()
{
	int tem;
	dnode *head=(dnode*)malloc(sizeof(dnode));
	dnode *temNode1=head;
	dnode *temNode2,*temNode3; 
	while(cin>>tem,tem!=-1)//ÊäÈë-1½áÊø 
	{
		
		temNode1->data=tem;
		temNode1->feq=0; 
		temNode2=(dnode*)malloc(sizeof(dnode));
		temNode3=temNode1;
		temNode1->next=temNode2;
		temNode2->prev=temNode1;
		temNode1=temNode2;
	}
	temNode3->next=head;
	head->prev=temNode3;
	return head;
}

void PrintList(dnode *a)
{
	dnode *head=a;
	while(a)
	{
		cout<<a->data<<" ";
		a=a->next;
		if(a==head)
			break;
	}
	cout<<endl;
}

dnode* FeqSort(dnode *A)
{
	dnode *head=A;
	dnode *dnodes[1000];
	int n=0;
	while(A)
	{
		dnodes[n++]=A;
		A=A->next;
		if(A==head)
			break;
	}
	
	for(int i=0;i!=n-1;i++)
	{
		int max=i;
		for(int j=1;j!=n;j++)
		{
			if(dnodes[max]->feq<dnodes[j]->feq)
				max=j;
		}
		dnode *tem=dnodes[i];
		dnodes[i]=dnodes[max];
		dnodes[max]=tem;
	}
	
	head=dnodes[0];
	for(int i=0;i!=n-1;i++)
	{
		dnodes[i]->next=dnodes[i+1];
		dnodes[i+1]->prev=dnodes[i];
	}
	head->prev=dnodes[n-1];
	dnodes[n-1]->next=head;
	
	return head;
}

int main()
{
	dnode *A=Create();
	PrintList(A);
	A=FeqSort(A);
	PrintList(A);
} 
