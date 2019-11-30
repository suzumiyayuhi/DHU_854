#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	char data;
	node *next;
};

node* Create(int n)
{
	char tem;
	int count=0;
	node *head=(node*)malloc(sizeof(node));
	node *temNode1=head;
	node *temNode2,*temNode3; 
	while(cin>>tem) 
	{
		temNode1->data=tem;
		temNode2=(node*)malloc(sizeof(node));
		temNode3=temNode1;
		temNode1->next=temNode2;
		temNode1=temNode2;
		count++;
		if(count==n)
			break;
	}
	temNode3->next=NULL;
	return head;
}

bool dc(node *h,int n)
{
	char str[n];
	for(int i=0;i!=n;i++)
	{
		str[i]=h->data;
		h=h->next;
	}
	for(int i=0;i!=n/2;i++)
	{
		if(str[i]!=str[n-1-i])
			return false;
	}
	return true;
}

int main()
{
	int n=6; 
	node *a=Create(n);
	if(dc(a,n))
		cout<<"true";
	else
		cout<<"false";
} 
