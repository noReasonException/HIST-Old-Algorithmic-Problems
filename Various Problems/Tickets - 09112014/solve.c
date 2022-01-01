#include <stdio.h>
#include <string.h>

int start(); /*Προσθια της Start*/
int seat(int numbers,int positionsx,int positionsy); /*Προσθια της seat[ελενχος και κρατηση θέσεων*/
int pos[15][20];/*Ορισμός Λίστας Δεδομένων*/
int a,b,num,positx,posity,term=0; /*Ορισμός a,b[Απαριθμητικές Μεταβλητές] num[αριθμος θεσεων]
positx,posity[position of x , position of y][μεταβλητές θέσης][μεταβλητή τερματισμού]*/
char c; /*Μεταβλητή απαντησης στην αρχική ερώτηση*/
void main()/* main*/
{
    start();/*Αρχικοποίηση*/
    while(1)/*MainLoop*/
    {
        printf("Do You Want to keep some seats?{y/n}\n");/*Ερώτηση*/
        scanf("%c",&c);/*Ληψη απάντησης*/
        if(c=='y')/*Λοιπές ερωτήσεις και κάλεσμα της seat*/
        {
            printf("How Many?");
            scanf("%d",&num);
            printf("Number seat x y");
            scanf("%d %d",&positx,&posity);
            seat(num,positx,posity);
	    
        }
	if(c=='n') break;
    }
    
}
int start()/*Αρχικοποιήση*/
{
        for(a=0;a<=15;a++)
        { 
            for(b=0;b<=20;b++)
            {
                pos[a][b]=0;
            }
        }
        return 1;
}
int seat(int numbers,int positionsx,int positionsy)
{
    int xh=positionsx,yh=positionsy;
    for (a=1;a<=numbers;a++)
    {
        if (pos[xh][yh++]==1) /*Ελενχος των θέσεων αν είναι 1[πιασμένες]*/
	{
		printf("Seat %d %d ......FALL\n",xh,yh);
		printf("Please Choose Another Location\n");
		return 0 ;/*Επιστρέφουμε κωδικό Αποτυχίας*/
	}
    }

    xh=positionsx,yh=positionsy;
    for (a=1;a<=numbers;a++)
    {
        if (xh>15 || yh+numbers >20) /*Ελενχος εκτος ορίων θέσεων*/
	{
		printf("Seat %d %d ......FALL\n",xh,yh);
		printf("Please Choose Another Location\n");
		return 0 ;/*Επιστρέφουμε κωδικό Αποτυχίας*/
	}
    }
    

    
    for (a=1;a<=numbers;a++)/*Αφού δεν ειναι καμία πιασμένη[αλλιως θα είχε τερματιστεί η seat]*/
    {
        pos[positionsx][positionsy++]=1;
	printf("Seat %d %d ......DONE\n",positionsx,positionsy);/*Τότε πιάνουμε τις θέσεις*/
    }
    return 1 ;/*Επιστρέφουμε κωδικό επιτυχη*/
    
}
