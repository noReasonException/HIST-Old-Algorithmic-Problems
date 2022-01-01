#include <stdio.h> //Εισαγωγή του Standard Input/Output Header File της C 
struct NewNode//Δήλωση δομής 
{
	int data; //Περιοχή Δεδομένων του κόμβου
	struct NewNode *ConnectionAddress; //Περιοχή επόμενης διεύθυνσης
	struct NewNode *ConnectionAddressBack; //περιοχή προηγούμενης διεύθυνσης
	int isTail;


};//Τέλος Δήλωσης της δομής
struct NewNode *HeadNode = NULL;//Κομβος κεφαλής (Προσβασή στην δομή)
struct NewNode *TailNode = NULL;//Κόμβος ουράς 

void Push(int NewNodeData)//Δήλωση της Push ως συνάρτησης τύπου int με παράμετρο NewNodeData 
																		//επίσης τύπου int
						 //Η παράμετρος θα περιέχει τα δεδομένα του νέου κόμβου
{
	struct NewNode *NodeToEnter = (struct NewNode *)malloc(sizeof(struct NewNode));
	//Δήλωση του Νεου Κόμβου(NodeToEnter) και δυναμική δέσμευση μνήμης 
	//ίση με το μέγεθος της δομής NewNode


	NodeToEnter->data=NewNodeData; // Εισαγωγή των δεδομένων στον Νεο κόμβο κόμβο 
	
	if (HeadNode==NULL) // Αν η δομή μας είναι κενή
	{
		HeadNode = NodeToEnter; // Δήλωσε τον νέο κόμβο ώς κόμβο κεφαλής 
		HeadNode->ConnectionAddress=NULL;
		return ;                // Και μήν κάνεις τίποτε αλλο

	}
	else{
		NodeToEnter->ConnectionAddress = HeadNode;
		HeadNode = NodeToEnter;

		

	}


}

void push_double_linked_list(int NewNodeData)
{
	struct NewNode *NodeToEnter =(struct NewNode *)malloc(sizeof(struct NewNode));
	NodeToEnter->data=NewNodeData;
	if (HeadNode==NULL) // Αν η δομή μας είναι κενή
	{
		HeadNode = NodeToEnter; // Δήλωσε τον νέο κόμβο ώς κόμβο κεφαλής 
		HeadNode->ConnectionAddress=NULL; //Επόμενη διεύθυνση κενή
		HeadNode->ConnectionAddressBack=NULL; //προηγούμενη διεύθυνση κενή 
		TailNode = NodeToEnter;
		return ;                // Και μήν κάνεις τίποτε αλλο
	}
	else{
		NodeToEnter->ConnectionAddress = HeadNode; // επόμενος του Νεου κόμβου ο HeadNode
		HeadNode->ConnectionAddressBack=NodeToEnter; // Προηγούμενος του HeadNode ο νεος
		HeadNode = NodeToEnter;						//Δήλωση νέου κόμβου ως κόμβου HeadNode

		

	}

}
void push_circular_linked_list(int NewNodeData)
{
	struct NewNode *NodeToEnter =(struct NewNode *)malloc(sizeof(struct NewNode));
	NodeToEnter->data=NewNodeData;
	if (HeadNode==NULL) // Αν η δομή μας είναι κενή
	{
		HeadNode = NodeToEnter; // Δήλωσε τον νέο κόμβο ώς κόμβο κεφαλής 
		TailNode = NodeToEnter; //και ως κόμβο ουράς
		HeadNode->ConnectionAddress=NULL; //Επόμενη διεύθυνση κενή
		return ;                // Και μήν κάνεις τίποτε αλλο
	}
	else{
		NodeToEnter->ConnectionAddress = HeadNode; // επόμενος του Νεου κόμβου ο HeadNode
		HeadNode = NodeToEnter;						//Δήλωση νέου κόμβου ως κόμβου HeadNode
		TailNode->ConnectionAddress=HeadNode;       //δημιουργία της κυκλικης σύνδεσης


		

	}

}
/*
edited for display() use 
void push_circular_linked_list_edited(int NewNodeData)
{
	struct NewNode *NodeToEnter =(struct NewNode *)malloc(sizeof(struct NewNode));
	NodeToEnter->data=NewNodeData;
	if (HeadNode==NULL) // Αν η δομή μας είναι κενή
	{
		HeadNode = NodeToEnter; // Δήλωσε τον νέο κόμβο ώς κόμβο κεφαλής 
		TailNode = NodeToEnter; //και ως κόμβο ουράς
		HeadNode->ConnectionAddress=NULL; //Επόμενη διεύθυνση κενή
		NodeToEnter->isTail = 1; //δηλώσε οτι είναι κόμβος ουράς
		return ;                // Και μήν κάνεις τίποτε αλλο
	}
	else{
		NodeToEnter->ConnectionAddress = HeadNode; // επόμενος του Νεου κόμβου ο HeadNode
		HeadNode = NodeToEnter;						//Δήλωση νέου κόμβου ως κόμβου HeadNode
		TailNode->ConnectionAddress=HeadNode;       //δημιουργία της κυκλικης σύνδεσης
		NodeToEnter->isTail = 0; //δεν είναι κόμβος ουράς


		

	}

}
*/ 

void push_circular_double_linked_list(int NewNodeData)
{
	struct NewNode *NodeToEnter = (struct NewNode *)malloc(sizeof(struct NewNode));
	NodeToEnter->data = NewNodeData;
	if(HeadNode == NULL)
	{
		
		HeadNode = NodeToEnter;
		TailNode = NodeToEnter;
		NodeToEnter->ConnectionAddress=NULL;
		NodeToEnter->ConnectionAddressBack=NULL;
		return;

	}
	else
	{
		NodeToEnter->ConnectionAddress=HeadNode;
		HeadNode->ConnectionAddressBack = NodeToEnter;
		HeadNode=NodeToEnter;
		TailNode->ConnectionAddress=HeadNode;
		
	}
}

/* 
edit for display() use
void push_circular_double_linked_list(int NewNodeData)
{
	struct NewNode *NodeToEnter = (struct NewNode *)malloc(sizeof(struct NewNode));
	NodeToEnter->data = NewNodeData;
	if(HeadNode == NULL)
	{
		
		HeadNode = NodeToEnter;
		TailNode = NodeToEnter;
		NodeToEnter->ConnectionAddress=NULL;
		NodeToEnter->ConnectionAddressBack=NULL;
		HeadNode->isTail = 1;
		return;

	}
	else
	{
		NodeToEnter->ConnectionAddress=HeadNode;
		HeadNode->ConnectionAddressBack = NodeToEnter;
		HeadNode=NodeToEnter;
		TailNode->ConnectionAddress=HeadNode;
		HeadNode-> isTail = 0
		
	}
}
*/
void Display(struct NewNode *HeadAddress)
{
	struct NewNode *p;
	p = HeadAddress;
	while (p->ConnectionAddress != NULL){
		printf("%d\n",p->data);
		p=p->ConnectionAddress;
	}
	printf("%d\n",p->data);
}

/*
Working using push_edited versions
void Display_CL(struct NewNode *HeadAddress)
{
	struct NewNode *p;
	p = HeadAddress;
	while (p->isTail!=1){
		printf("%d\n",p->data);
		p=p->ConnectionAddress;
	}
	printf("%d\n",p->data);
}
*/
void Index(struct NewNode *HeadAddress , int position)
{
	struct NewNode *p;
	p = HeadAddress;
	int i;
	for(i=0;i<position;i++){
		p=p->ConnectionAddress;
	}
	printf("%d\n",p->data);
}


int GetTop(struct NewNode *HeadAddress){return HeadAddress->data;}

int IsEmpty(struct NewNode *HeadAddress) {
	if (HeadAddress==NULL)return 1; 
	else return 0;
}


void pop_lifo()
{
	struct NewNode *TheNextHeadNode = HeadNode->ConnectionAddress;
	free(HeadNode);
	HeadNode = TheNextHeadNode;
	//TailNode->ConnectionAddress = HeadNode;
}


void pop_fifo()
{
	struct NewNode *TheNextTailNode = TailNode->ConnectionAddressBack;
	free(TailNode);
	TailNode = TheNextTailNode;
	//TailNode->ConnectionAddress = HeadNode;
	//HeadNode->ConnectionAddressBack = TailNode;
}



int main()
{
	push_double_linked_list(10);
	push_double_linked_list(20);
	push_double_linked_list(30);
	pop_lifo();
	printf("%d \n",HeadNode->data);

	
}