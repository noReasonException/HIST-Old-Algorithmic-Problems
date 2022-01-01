#include <stdio.h> //Εισαγωγή του Standard Input/Output Header File της C 
struct NewNode//Δήλωση δομής 
{
	int data; //Περιοχή Δεδομένων του κόμβου
	struct NewNode *Next; //περιοχή επόμενης διεύθυνσης του κόμβου 


};//Τέλος Δήλωσης της δομής


struct NewNode *HeadNode = NULL;

void Push(int NewNodeData)
{
	struct NewNode *NodeToEnter = (struct NewNode *)malloc(sizeof(struct NewNode));


	NodeToEnter->data=NewNodeData; 
	
	if (HeadNode==NULL)
	{
		HeadNode = NodeToEnter;
		NodeToEnter->Next=NULL;

	}
	else{
		NodeToEnter->Next = HeadNode;
		HeadNode = NodeToEnter;

		

	}



}

void Display(struct NewNode *HeadAddress)
{
	struct NewNode *p;
	p = HeadAddress;
	while (p->Next != NULL){
		printf("%d\n",p->data);
		p=p->Next;
	}
	printf("%d\n",p->data);
}

void Index(struct NewNode *HeadAddress , int position)
{
	struct NewNode *p;
	p = HeadAddress;
	int i;
	for(i=0;i<position;i++){
		p=p->Next;
	}
	printf("%d\n",p->data);
}


/*int GetTop(struct NewNode *HeadAddress){return HeadAddress->data;}

int IsEmpty(struct NewNode *HeadAddress) {
	if (HeadAddress==NULL)return 1; 
	else return 0;
}

*/
void Pop()
{
	struct NewNode *TheNextHeadNode = HeadNode->Next;
	free(HeadNode);
	HeadNode = TheNextHeadNode;
}



 

int main()
{
	Push(10);
	Push(20);
	Push(30);
	Index(HeadNode,2);

	
}