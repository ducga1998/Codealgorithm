#include<stdio.h>
#include<stack>
#include<iostream>
using namespace std;

void induong(int n,int m,int *d)
{
	if(n==m) {cout<<n;return;}
	induong(n,d[m],d);
	cout<<"->"<<m;
}

bool DFS(int n,int m)
{
	stack<int> S;
	int *d=new int [n+5];
	for(int i=m;i<=n;d[i++]=0);
	S.push(n);
	while(!S.empty())
	{
		int t=S.top(); S.pop();
		for(int a=1;a*a<=t;a++)
		if(t%a==0)
		{
			int x=(a-1)*(t/a+1);
			if(x>=m) 
			{
				S.push(x);
				d[x]=t; 
			}
			if(x==m) {induong(n,m,d);cout<<endl;}
		}
	}
	return 0;
}

int main()
{
	int n,m;
	cin>>n>>m;
	cout<<(DFS(n,m)?"\nDi duoc":"\nkhong di duoc");	
}
