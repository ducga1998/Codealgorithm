#include<stdio.h>
#include<stack>
#include<iostream>
#include<utility>

#define x first
#define y second
using namespace std;

typedef pair<int,int> TT;

#define mk make_pair
#define FOR(i,a,b) for(int i=a;i<=b;i++)

#define P(u) P[u.x][u.y]
// các thường hợp biến đổi nó

TT bd(TT t,int c,int n,int m)
{
	switch(c)
	{
		case 1: return mk(0,t.y);
		case 2: return mk(t.x,0);
		case 3: return mk(n,t.y);
		case 4: return mk(t.x,m);
		case 5:
				if(t.x+t.y<m) return mk(0,t.x+t.y);
				return mk(t.x+t.y-m,m);
		default:
				if(t.x+t.y<n) return mk(t.x+t.y,0);
				return mk(n,t.x+t.y-n);
	}
}

void induong(TT **P,TT u)
{
	if(u.x==0 && u.y==0) cout<<"(0,0)";
	else
	{
		induong(P,P(u));
		cout<<"->"<<"("<<u.x<<","<<u.y<<")";
	}
}

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	stack<TT> S;
	// cấp phát mảng hai chiều

	TT **P=new TT* [n+1];
	FOR(i,0,n) P[i]=new TT[m+1];

	FOR(i,0,n)
	FOR(j,0,m) P[i][j]=mk(-1,-1);
	//gán tất cả đều có kiểu mk

	S.push(mk(0,0));
	P[0][0]=mk(0,0);
	while(!S.empty())
	{
		TT t=S.top();
		S.pop();
		for(int c=1;c<=6;c++)
		{
		    //  hàm bd sẽ trở về một TT khi đã đc xử lý từ 6 TH
			TT u=bd(t,c,n,m);
			if(P(u).x==-1)
			{
				P(u)=t;
				S.push(u);
				if(u.x==k||u.y==k)
				{
					induong(P,u);
					return 0;
				}
			}
		}
	}
	cout<<"Khong dong duoc nuoc";

}
