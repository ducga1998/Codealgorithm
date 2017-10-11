#include<stdio.h>
int dem=0;
void inkq(int *x,int n,int M)
{
	printf("\n%d :  %d = %d",++dem,M,x[1]);
	for(int i=2;i<=n;i++) printf("+%d",x[i]);
}
void TRY(int *x,int k,int T,int n,int M)
{
	if(k==n-1)
	{
		x[n]=M-T;
		 inkq(x,n,M);
		return;
	}	
	for(int t=0;t<=M-T;t++) 
	{
		x[k+1]=t;
		TRY(x,k+1,T+t,n,M);
	}	
}

int main()
{
	int x[100];
	TRY(x,0,0,3,10);
}

