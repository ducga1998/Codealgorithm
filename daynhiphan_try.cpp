#include<stdio.h>


void TRY(int *b,int k,int n)//day nhi phan
{
	if(k==n)
	{
		for(int i=1; i<=k; i++) printf("%d",b[i]);
		printf("\n");
		return;
	}
//	b[k+1]=0; TRY(b,k+1,n);
//	b[k+1]=1; TRY(b,k+1,n);
	for(int t=0; t<=1; t++)
	{
		b[k+1]=t;
		TRY(b,k+1,n);
	}
}


int main()
{
	int b[1000];
	TRY(b,0,4);
}

