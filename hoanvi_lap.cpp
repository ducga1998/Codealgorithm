#include<stdio.h>
#include<string.h>

char KT[100];
int TS[100];
int num=0;

void ts(char *s)
{
	char F[300];
	for(char c='A';c<='Z';c++) F[c]=0;
	for(;*s;s++) F[*s]++;
	for(char c='A';c<='Z';c++) 
	if(F[c])
	{
		KT[num]=c;
		TS[num]=F[c];
		num++;
	} 
}

void TRY(char *x,int k,int n)
{
	if(k==n) {int static dem=0; printf("%3d : %s\n",++dem,x); return;}
	for(int t=0;t<num;t++)
	if(TS[t])
	{
		x[k]=KT[t];
		TS[t]--;
		TRY(x,k+1,n);
		TS[t]++;
	}
}

int main()
{
	char s[100],x[100];
	scanf("%s",s);
	int n=strlen(s);
	x[n]=0;
	ts(s);
	for(int i=0;i<num;i++) 
	printf("\nKy tu %c co tan xuat %d\n",KT[i],TS[i]);
	TRY(x,0,n);
}

