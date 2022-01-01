#include <iostream> //inlcude the iostream library

#include <cstdio> //include the cstdio library
  
#include <math.h>  //include the math.h library

#include <queue>   //include the queue library

#include <vector>  //include the vector library

#include <algorithm>  //include the algorithm library

#include <memory.h>  //include the memory.h header file
  
#define maxv 100000  //define maxv as 100000 

#define maxe 100000  //define maxe as 100000

#define inf 10000000   //define inf as 10000000

#define CLEAR(A,N) (memset(A,0,(N)*sizeof A[0]))  //define the clear as callback of memset fuction
//so to assign 0 in a array quickly

using namespace std;  // classic unnown fucking command

struct edge{          //edge type {struct}

	int n,cost;       // integer values n and cost
					  //details ...
					  // n is for the next node {connectto }
					  // cost is for the cost of going there	
};
bool operator < (edge x,edge y)  //overload operator < (parameters x , y of type (struct edge)) 
{                          
	return (x.cost > y.cost);    //return true if x is bigger than y 
}

int used[maxv+5];                //intialise used array so to we know if an node [i]
								 // is visited or not

vector <edge> v[maxv+5];         // intialise graph {as vector with maxv+5 nodes}

int dijkstra(int start_from,int target,int numberofnodes){  //dijkstra main fuction with parameters {NULL}

	int i;                        // integer value i is an counter for a for() loop
	
	priority_queue <edge> DJqueue;      //intialise priority queue of Dijkstra Algorithm
	
	edge insertnode,currentnode;                   // intialise the t and the cur
								  //Details ...
								  //|


	insertnode.n=start_from;                         //We intialise the first node {doesnt exist real in node} 
	                               //n set as the first {real} node

/*
                                                  _
                                                /|1|
							[t]             _  /  
							|-->  |t|{n} = |0|/
							|--> cost of connection {cost} = 0; 
*/

	insertnode.cost=0;               //set the first connection equals to 0;

	DJqueue.push(insertnode);              //push() it into the priority queue

	CLEAR(used,numberofnodes+1);        //clear the used array

	while(!DJqueue.empty()){      //runs while the queue isnt empty 

		insertnode=DJqueue.top();          //get the top element.save it into the t node

		DJqueue.pop();            //pop() the top() element

		if(insertnode.n==target) return insertnode.cost;  //ιf we are in the node we want to just terminate returns
		                           //the minimum cost

		if(used[insertnode.n]==1) continue; //if we already use this node . continue!

		used[insertnode.n]=1;               //else ,mark the current node as visited

		for(i=0;i<v[insertnode.n].size();i++)  // run all the neighboors of current node

		{
			currentnode=v[insertnode.n][i];           // save the current neighboor 

			if(used[currentnode.n]==0)       //if we have'nt already used this node
			{

				currentnode.cost=currentnode.cost+insertnode.cost;  // add the cost of the previous one to the
                                           //neighboorhood one
				DJqueue.push(currentnode);               //push it!

			}
		}
	}
	return -1;  //ιf everything is over and we dont have return anything the node we are
	           //looking too isnt exist
}
void reset(int a) //reset the graph
{
	for(int i=0;i<=a;i++)
	{
		v[i].clear();
	}
}

int main()
{
	//lets create the graph!
	int sumofnodes,sumofneighboorhoods,connectcost,connectname,i,j,res;
	printf("Give me the sum of nodes");
	scanf("%d",&sumofnodes);
	for(i=0;i<sumofnodes;i++)
	{
		printf("Give me please the sum of the neighboors of the node %d",i);
		scanf("%d",&sumofneighboorhoods);
		for(j=0;j<sumofneighboorhoods;j++)
		{

			printf("neighboor no %d > ",j);
			scanf("%d",&connectname);
			printf("cost of connection? > ");
			scanf("%d",&connectcost);
			edge for_add;
			for_add.n = connectname;
			for_add.cost=connectcost;
			v[i].push_back(for_add);
		}
	}
	printf("%d",dijkstra(0,4,5));
}