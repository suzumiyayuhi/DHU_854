#include<iostream>
#include<stdlib.h>
using namespace std;

void AdjustDown(int A[],int k,int sz)
{
	A[0]=A[k];
	for(int i=k*2;i<=sz;i*=2)
	{
		if(i<sz&&A[i]<A[i+1])
			i++;
		if(A[0]>=A[i])
			break;
		else
		{
			A[k]=A[i];
			k=i;
		}
			
	}
	A[k]=A[0];
}

void BuildMaxHeap(int a[],int sz)
{
	for(int i=sz/2;i>0;i--)
		AdjustDown(a,i,sz);
} 


void HeapSort(int A[],int len)
{
	BuildMaxHeap(A,len);//建最大堆 
	for(int i=len;i>1;i--)
	{
		int tem=A[i];//堆顶元素与堆底元素交换 
		A[i]=A[1];
		A[1]=tem;
		AdjustDown(A,1,i-1);//将n-1个元素整理成堆 
	}
}


int main()
{
	int A[]={0,5,7,3,0,4,1,2};//从1开始下标 
	for(int i=1;i!=8;i++)
		cout<<A[i]<<" ";
		cout<<endl;
	HeapSort(A,7);
	for(int i=1;i!=8;i++)
		cout<<A[i]<<" ";
	
}
