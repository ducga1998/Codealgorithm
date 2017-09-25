#include<stack>
#include<iostream>

using namespace std;
char Hex[]="0123456789abcdefghijkl";
int main()
{
	stack<char> s;
	int n;
	cin>>n;
	while(n>0)
	{
		s.push(Hex[n%16]);
		n=n/16;
	}
	cout<<"Co so 16 cua n : ";
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}	
}

