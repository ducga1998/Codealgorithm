#include<iostream>
#include<queue>
#include<algorithm>

bool ss(int a,int b){return a>b;}
using namespace std;
int main()
{
	int n,m;
	int a[1000];
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,ss);
	queue<int> Q;
	int d=a[0];
	Q.push(a[0]);
	for(int i=1;i<n;i++)
	{
		if(a[i]+m<=Q.front()) Q.pop();
		else d+=a[i];
		Q.push(a[i]);
	}
	cout<<d;	
}

