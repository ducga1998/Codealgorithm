#include<stdio.h>
bool kt(int *x,int k,int t)
{
	for(int i=1;i<=k;i++)
	{
		if(t==x[i]) return 0;
		if(k+1-i==t-x[i]) return 0;
		if(k+1-i==x[i]-t) return 0;
	}
	return 1;
}
int dem=0;
void TRY(int *x,int k,int n)//,int *d,int *C,int *P) 
{
	if(k==n)
	{
	//	printf("\n %d : ",++dem);
		//for(int i=1; i<=k; i++) printf("(%d,%d)",i,x[i]);
		
		return;
	}
	for(int t=1;t<=n;t++)
	if(kt(x,k,t))
	{
		x[k+1]=t;
		TRY(x,k+1,n);//,d,C,P);
	}
/*	if(d[t]==0 && C[k+1-t]==0 && P[k+1+t]==0)
	{
		x[k+1]=t;
		d[t]= C[k+1-t]= P[k+1+t]=1;
		TRY(x,k+1,n,d,C,P); //tien
		d[t]= C[k+1-t]= P[k+1+t]=0;
	}
	*/
	
}
int main()
{
	int x[100],d[200],q[200],P[200],*C=q+100;
	//for(int i=0;i<200;i++) d[i]=q[i]=P[i]=0;
	int n=13;
	TRY(x,0,n);//,d,C,P);
}

