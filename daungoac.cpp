#include<stack>
#include<iostream>

using namespace std;

int main()
{
	char x[10000];
	printf("Nhap x : "); scanf("%s",x);
	stack<char> S;
	bool ok=true;
	for(char *p=x;*p;p++)
	if(*p=='('||*p=='['||*p=='<'||*p=='{') S.push(*p);
	else if(*p==')')	
	{
		if(S.empty()||S.top()!='(') {ok=false;break;}
		else S.pop();
	}
	else if(*p==']')	
	{
		if(S.empty()||S.top()!='[') {ok=false;break;}
		else S.pop();
	}
	else if(*p=='>')	
	{
		if(S.empty()||S.top()!='<') {ok=false;break;}
		else S.pop();
	}
	else if(*p=='}')	
	{
		if(S.empty()||S.top()!='{') {ok=false;break;}
		else S.pop();
	}
	printf(ok?"Hop le":"khong hop le");	
}
