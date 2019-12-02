#include<iostream>
#include<stack>
#include<math.h> 
using namespace std;

string t="ABCDEFGHIJKLMNOPQRSTUVWXYZ";//便于调试，使用大写英文字母代表数值，A为0以此类推 

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
	aTOb(str,10,16);//10转16
}
