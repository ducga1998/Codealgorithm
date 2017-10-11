#include<stdio.h>
char xau[205];
int k1,k2;
void inkq(int *x,int k,int n)
{
	int len=0;
	for(int i=1; i<=k; i++)
		if(x[i]==0) xau[len++]='0';
		else
		{
			for(int j=1; j<=x[i]; j++) xau[len++]='1';
		}
	printf("%s\n",xau);
}

void TRY(int *x,int k,int T,int n)
{
	if(T==n)
	{
		inkq(x,k,n);
		return;
	}
	if(x[k])
	{
		x[k+1]=0;
		TRY(x,k+1,T+1,n);
	}
	else
	{
		for(int t=k1; t<=k2&&T+t<=n; t++)
		{
			x[k+1]=t;
			TRY(x,k+1,T+t,n);
		}
	}
}
int main()
{
	int n,x[205];
	scanf("%d%d%d",&n,&k1,&k2);
	xau[n]=0;
	x[1]=0;
	TRY(x,1,1,n);
	x[0]=0;
	TRY(x,0,0,n);
}

