#include <iostream>
#include <queue>
#include <cstdio>
#include <vector>
using namespace std;

/*available vector operations
1) v[s].pop();                      //delete the top element 
2) v[s].top();                     //Get the top element without delete
3) v[s].push(int clude);          //add a node
4) v[s].size()                   //return the number of nodes

*/

							  //for list 
int visit[1005];              //save if we have already visit this node <3 

vector <int> connectedto[1005]; //graph representing with vector 
								//connected[i] returns the {head address} list of all
								// neighboors of the node i 

void Breadth_first_search(int currentnode)
{
	int i,j,topoflist,checkednode;
	queue <int> BFSqueue;//queue list whitch connected[i] is the head address
	BFSqueue.push(currentnode);
	visit[currentnode]=1;
	while(!BFSqueue.empty())
	{	
		topoflist=BFSqueue.front();
		BFSqueue.pop();
		printf("%d\n",topoflist);
		for(j=0;j<connectedto[topoflist].size();j++)
		{
			checkednode=connectedto[topoflist][j];
			if(!visit[checkednode])
			{
				visit[checkednode]=1;
				BFSqueue.push(checkednode);
			}
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
			connectedto[dat].push_back(anotherdat);
		}
	}
	Breadth_first_search(1);
}
