#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

bool com(int a,int b)
{
	if(a%2&&b%2) return a<b;
	if(a%2==0&&b%2==0) return a>b;
	if(a%2 && b%2==0) return true;
	return false;
}

int main()
{
	int x[]={4,7,2,8,4,8,3,2,4,9,3,6};
	int n=sizeof(x)/sizeof(int);
	sort(x,x+n,com);
	for(int i=0;i<n;i++) printf("%8d",x[i]);
}
