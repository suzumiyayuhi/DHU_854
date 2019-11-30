#include<iostream>
using namespace std;

void InsertSort(int *a,int sz)
{
	int tem,low,high;
	for(int i=1;i!=sz;i++)
	{
		tem=a[i];
		low=0;high=i-1;
		int temlow=0,temhigh=high,mid;
		while(temlow<=temhigh)
		{
			mid=(temlow+temhigh)/2;
			if(a[mid]>tem)
				temhigh=mid-1;
			else
				temlow=mid+1;
		}
		if(tem<a[mid])
		{
			for(int j=i-1;j!=mid-1;j--)
				a[j+1]=a[j];
			a[mid]=tem;
		}
	}
}

int main()
{
	int sz=5;
	int A[sz]={3,7,5,9,6};
	InsertSort(A,sz);
	for(int i=0;i!=sz;i++)
		cout<<A[i]<<" ";
}
