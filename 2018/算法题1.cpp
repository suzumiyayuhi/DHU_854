#include<iostream>
#include<stdlib.h>
using namespace std;

struct NODE
{
	int data;
	NODE *next;	
};

NODE* Create()
{
	int tem;
	NODE *head=(NODE*)malloc(sizeof(NODE));
	NODE *temNode1=head;
	NODE *temNode2,*temNode3; 
	while(cin>>tem,tem!=-1) 
	{
		temNode1->data=tem;
		temNode2=(NODE*)malloc(sizeof(NODE));
		temNode3=temNode1;
		temNode1->next=temNode2;
		temNode1=temNode2;
	}
	temNode3->next=NULL;
	return head;
}

void PrintList(NODE *a)
{
	while(a)
	{
		cout<<a->data<<" ";
		a=a->next;
	}
	cout<<endl;
}

void DeleteRepeated(NODE *A)
{
	int temi=A->data;
	NODE *temn=A;
	A=A->next;
	while(A)
	{
		if(A->data!=temi)
		{
			temi=A->data;
			temn->next=A;
			temn=temn->next;
		}	
		A=A->next;
	}
	temn->next=NULL;
}

int main()
{
	NODE *a=Create();
	PrintList(a);
	DeleteRepeated(a);
	PrintList(a);
} 
