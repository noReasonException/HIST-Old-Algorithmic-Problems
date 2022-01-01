#include <iostream>

#include <csdio>

#include <algorithm>

#define MAX (a,b) (a>b)?a:b

#define maxe 300005

using namespace std;

int m , n , p;

struct graph
{
	int x,y;
	long int cost;
};

struct graph v[maxe];

int ar[maxe];

int findset(int i)
{
	while(ar[i]!=i)
	{
		i=ar[i];

	}
	return i;
}

void makeunion(int a,int p1 , int b , int p2)
{
	int x=MAX(p1,p2);
	ar[a]=x;
	ar[b]=x;
	ar[p1]=x;
	ar[p2]=x;

}

bool findunion(int a,int b)
{
	if(ar[a]==-1)
	{
		ar[a]=a;

	}
	if(ar[b]==-1)
	{
		ar[b]=b;
	}
	int p1=findset(a);
	int p2=findset(b);

	if(p1==p2) return 0;
	else{
		makeunion(a,p1,b,p2);
		return 1;
	}
}
bool operator < (struct graph a, struct graph b)
{
	return(a.cost < b.cost);
}
int main(){
	//freopen("lin.txt","r",stdin);
	int t,i,j;
	long int mincost;

	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		scanf("%d",&p);
		scanf("%d",&n);
		scanf("%d",&m);

		for(j=0;j<=m;j++)
		{
			scanf("%d %d %ld",&v[j].x,&v[j].y&v[j].cost);
		}
		for(j=0;j<=n;j++){
			ar[j]=-1;
		}
		sort(v,v+m);
		mincost=0;

		for(j=0;j<m;j++)
		{
			if(findunion(v[j].x,v[j].y))
			{
				mincost+=v[j].cost;
			}
		}
		mincost*=p;
		printf("%ld\n",mincost);
	}
	return 0;
}
	}
}