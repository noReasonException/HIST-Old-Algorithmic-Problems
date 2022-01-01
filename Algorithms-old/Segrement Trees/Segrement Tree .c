#include<iostream>
#include<cstdio>
#include<memory.h>
#include<algorithm>
#define maxnode 400005
#define uint unsigned long long int
#define CLEAR(A,N) memset(A,0,(N)*sizeof(A[0]))
using namespace std;

int n,m,i,r,a,b;
int tree[maxnode];

void upd(int st,int en,int element, int value,int node){
	if(st==en){
		tree[node]=value;
		return;
	}
	int mid=(st+en-1)/2;
	if(element<=mid){
		upd(st,mid,element,value,2*node);
	}
	else{
		upd(mid+1,en,element,value,2*node+1);
	}
	tree[node]=min(tree[2*node],tree[2*node+1]);
	return;
}

void update(int element,int value){
	upd(1,n,element,value,1);
}

int q(int a,int b,int st, int en,int node){
	int mid=(a+b-1)/2;
	if(a==st&&b==en){
		return tree[node];
	}
	if(en<=mid){
		return q(a,mid,st,en,2*node);
	}
	else if(st>mid){
		return q(mid+1,b,st,en,2*node+1);
	}
	else{
		return min(q(a,mid,st,mid,2*node),q(mid+1,b,mid+1,en,2*node+1));
	}
	return 0;
}

int query(int st,int en){
	return q(1,n,st,en,1);
}

int main(){
    //freopen("segment.in","r",stdin);
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
	scanf("%d",&r);
	update(i,r);
    }
    for(i=0;i<m;i++){
	scanf("%d %d",&a,&b);
	printf("%d\n",query(a+1,b+1));
    }
    //for(;;){}
    return 0;
}