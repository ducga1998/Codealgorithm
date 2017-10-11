#include<iostream>
using namespace std;

long long M[1000][1000];

long long C(int k, int n)
{
	if(M[k][n]>-1) return M[k][n];
	if(k == n || k == 0) return M[k][n]=1;	
	return M[k][n]=C(k -1,n -1) + C(k,n -1);
}

int main()
{
	int k=28,n=100;
	for(int i=0;i<=n;i++)
	for(int j=0;j<=n;j++) M[i][j]=-1;
	cout<<C(k,n);
}
