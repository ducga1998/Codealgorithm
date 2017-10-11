//BFS duong di tren do thi
#include<iostream>
#include<stdio.h>
#include<queue>

#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

struct Graph
{
	int n;
	bool M[100][100];
	void Nhap(FILE*f=stdin);
	void Xuat(FILE*f=stdout);
	int BFS(int s,int f);
};
int Graph::BFS(int s,int f)
{
	queue<int> Q;
	int d[100];
	FOR(i,1,n) d[i]=-1;
	d[s]=0;
	Q.push(s);
	while(!Q.empty())
	{
		int u=Q.front(); Q.pop();
		FOR(v,1,n)
		if(M[u][v]==1 && d[v]==-1)
		{
			d[v]=d[u]+1;
			Q.push(v);
			if(v==f) return d[v];
		}
	}
	return false;	
}
void Graph::Xuat(FILE*f)
{
	FOR(i,1,n)
	{
		FOR(j,1,n) fprintf(f,"%3d",M[i][j]);
		fprintf(f,"\n");
	}		
}
void Graph::Nhap(FILE *f)
{
	fscanf(f,"%d",&n);
	FOR(i,1,n)
	FOR(j,1,n) fscanf(f,"%d",&M[i][j]);	
}

int main()
{
	Graph G;
	int start,finish;
	FILE *f=fopen("g.txt","r");
	G.Nhap(f);
	G.Xuat();
	fclose(f);
	printf("Nhap dinh xuat phat s : "); scanf("%d",&start);
	printf("Nhap dinh ket thuc  f : "); scanf("%d",&finish);
	cout<<"Do dai duong di ngan nhat : "<<G.BFS(start,finish);
}
