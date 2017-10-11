#include<stdio.h>

char ten[100][10]={"_","cho","meo","trau","bo","lua","ngua"};

void TRY(int *c,int i,int k,int n)//day nhi phan
{
	if(i==k+1)
	{
		for(int j=1; j<=k; j++) printf("%s ",ten[c[j]]);
		printf("\n");
		return;
	}
	for(int t=c[i-1]+1;t<=n-k+i;t++)
	{
		c[i]=t;
		TRY(c,i+1,k,n);
	}
}

int main()
{
	int c[1000];
	c[0]=0;
	TRY(c,1,4,6);
}

