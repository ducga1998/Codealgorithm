#include<stdio.h>

char Nam[]="ABC";
char Nu []="XYZUV";

int d=0;
bool kt(int *a,int k,char c)
{
	for(int i=1;i<=k;i++) if(c==a[i]) return 0;
	return 1;
}

void TRY(int *a,int k)  //gia su co a1,a2,,,ak
{
	if(k==3) 
	{
		for(int i=1;i<=k;i++) printf("%c",a[i]);
		printf("\n");
		d++;
		return;
	}
	else
	{
		if(k==0)
		{
			for(int i=0;i<3;i++) 
			{
				a[k+1]=Nam[i]; 
				TRY(a,k+1);
			}
			for(int i=0;i<5;i++) 
			{
				a[k+1]=Nu[i]; 
				TRY(a,k+1);
			}
		}
		else if('A'<=a[k]&&a[k]<='C') 
		{
			for(int i=0;i<5;i++)
			if(kt(a,k,Nu[i])) 
			{
				a[k+1]=Nu[i]; 
				TRY(a,k+1);
			}
		}
		else
		{
			for(int i=0;i<3;i++) 
			if(kt(a,k,Nam[i])) 
			{
				a[k+1]=Nam[i]; 
				TRY(a,k+1);
			}
		}
	}	
}

int main()
{
	int a[1000];
	TRY(a,0);
	printf("\nCo tat ca %d ket qua",d);
}
