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

List* MinToHead(List *L)
{
	List *min=L,*tar,*head=L;
	while(L->next)
	{
		if(min->data>L->next->data)
		{
			min=L->next;
			tar=L;
		}
		L=L->next;
	}
	tar->next=min->next;
	min->next=head;
	return min;
}

int main()
{
	List *a=Create();
	PrintList(a);
	PrintList(MinToHead(node21,node11));
}
