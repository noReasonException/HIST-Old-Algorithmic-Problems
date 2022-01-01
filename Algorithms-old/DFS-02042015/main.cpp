#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <memory>
#define CLEAR(A,N)memset(A,0,(N)*sizeof(A[0]))
using namespace std;


/*available vector operations
1) v[s].pop();                      //delete the top element 
2) v[s].top();                     //Get the top element without delete
3) v[s].push(int clude);          //add a node
4) v[s].size()                   //return the number of nodes
*/
int n; 
vector<int>connectednodes[1005]; //list of {heads addresses} vectors who vector[s] is the head 
					// of the list with [s] connected nodes <3 
bool visit[1005]; //if clude visit[s]==1 then we have already visit node [s]

int Depth_First_Search(int currentnode)
{
	int counter01; //who runs the all list with current node neighborhoods 
	visit[currentnode]=1; //mark the current node as visited
	printf("%d",currentnode); //printf the data of current clude 
	for(counter01=0;(counter01<connectednodes[currentnode].size());counter01++)
	//run all the connected nodes list 
	{
		if(!visit[connectednodes[currentnode][counter01]]){
			//if we dont visit this node 
			Depth_First_Search(connectednodes[currentnode][counter01]);
			//start DFS again <3 
		}
	}
}
int main()
{
	int i,j,dat,num,connto,anotherdat;
	printf("GENERAM NUM OF NODEZZZZ");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		printf("DATA OF NODE");
		scanf("%d",&dat);
		printf("CONNECT TO >NUM OF NODEZZZ");
		scanf("%d",&connto);
		for(j=0;j<=connto;j++)
		{
			printf("Another node data");
			scanf("%d",&anotherdat);
			connectednodes[dat].push_back(anotherdat);
		}
	}
	Depth_First_Search(1);
}
