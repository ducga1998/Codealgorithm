#include<stdio.h>

void TRY(int *x,int k,int n,int *d) //sinh hoan vi
{
	if(k==n)
	{
		for(int i=1; i<=k; i++) printf("%3d",x[i]);
		printf("\n");
		return;
	}
	for(int t=1;t<=n;t++)
	if(d[t]==0)
	{
		x[k+1]=t;
		d[t]=1;
		TRY(x,k+1,n,d); //tien
		d[t]=0; //lui
	}
}
int main()
{
	int x[100],d[100];
	int n=10;
	for(int i=1;i<=n;i++) d[i]=0;
	TRY(x,0,n,d);
}

