#include<iostream>
#include<stack>
#include<math.h> 
using namespace std;

string t="ABCDEFGHIJKLMNOPQRSTUVWXYZ";//���ڵ��ԣ�ʹ�ô�дӢ����ĸ������ֵ��AΪ0�Դ����� 

void aTOb(string str,int a,int b)
{
	stack<int> s;
	int j=0;
	int sum=0,tem;
	for(int i=0;i<str.size();i++)
		sum+=(str[i]-65)*pow(a,i);
	while(sum)
	{
		s.push(sum%b);
		sum/=b;
	}
	while(!s.empty())
	{
		cout<<t[s.top()];
		s.pop();
	}
	
}

int main()
{
	string str;
	cin>>str;
	aTOb(str,10,16);//10ת16
}
