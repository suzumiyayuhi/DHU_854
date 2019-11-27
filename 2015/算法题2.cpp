#include<iostream>
#include<stdlib.h>
using namespace std;

struct List
{
	int data;
	List *next;	
};

List* Create()
{
	int tem;
	List *head=(List*)malloc(sizeof(List));
	List *temNode1=head;
	List *temNode2,*temNode3; 
	while(cin>>tem,tem!=-1)//ÊäÈë-1½áÊø 
	{
		
		temNode1->data=tem;
		temNode2=(List*)malloc(sizeof(List));
		temNode3=temNode1;
		temNode1->next=temNode2;
		temNode1=temNode2;
	}
	temNode3->next=NULL;
	
	return head;
}


void PrintList(List *a)
{
	while(a)
	{
		cout<<a->data<<" ";
		a=a->next;
	}
	cout<<endl;
}
List* Reverse(List *a)
{
	List *L1=NULL,*L2=NULL,*L3=NULL;
	while(a)
	{
		L1=a;
		L2=a->next;
		a=a->next;
		L1->next=L3;
		L3=L1;
	}
	return L3;
}

int main()
{
	List *a=Create();
	PrintList(a);
	a=Reverse(a);
	PrintList(a);
}
