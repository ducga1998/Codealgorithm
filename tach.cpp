#include<stdio.h>

long f(int n)
{
	return n<=4||n%2?1:f(n/2-2)+f(n/2+2);
}

int main()
{
	printf("%ld",f(1e+3));
}
