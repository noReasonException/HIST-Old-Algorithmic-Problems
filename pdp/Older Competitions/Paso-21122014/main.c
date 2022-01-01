
#include <stdio.h>


void main()
{
    /*--------------------------------------------------------*/
    /*Δήλωση Μεταβλητών */
	int size; /*Μεταβλητή μεγέθους x,y*/
	int end_pinaka,half_pinaka,start_pinaka;/* Συντομέυσεις Συντεταγμένων Πίνακα */
	int counter,counter02;/*Δηλώση Μεταβλητών Γενικού Σκοπού και μεταβλητης διαίρεσης*/
	scanf("%d",&size);/*Διάβασμα τιμης μεγεθούς*/
	size-=1;/*Μείον Ένα λόγω του η αριθμηση ξεκινα απο το μηδεν*/
	int given[size][size];/*Δήλωση Πίνακα Ν*Ν*/
	int position,startx,endx,starty,endy;/*Counters για διαίρεση*/
	int onenum=0,zeronum=0;
	start_pinaka = 0; /*Συντομευσεις Διευθυνσεων πίνακα*/
	end_pinaka = size;
	half_pinaka=size/2;
    
	/*Input*/    
	for (counter=0;counter<=size;counter++)
		for (counter02=0;counter02<=size;counter02++)
		{
		scanf("%d",&given[counter][counter02]);
		}
	/*Print*/
	for (counter=0;counter<=size;counter++)
	{
   		for (counter02=0;counter02<=size;counter02++)
		{
		printf(" %d ",given[counter][counter02]);
		}
		printf("\n");
	}
	/*------------------Diairesh-----------------------------------*/
	for (position=1;position<=4;position++)
	{
	    if (position==1) startx=start_pinaka,endx=half_pinaka,starty=start_pinaka,endy=half_pinaka;
	    if (position==2) startx=start_pinaka , endx=half_pinaka ,   starty=half_pinaka+1 , endy=end_pinaka;
	    if (position==3) startx=half_pinaka+1, endx=end_pinaka ,   starty=start_pinaka ,   endy=half_pinaka;
	    if (position==4) startx=half_pinaka+1 ,   endx=end_pinaka , starty=half_pinaka+1 , endy=end_pinaka;
	    printf("------------logs--------------\n");
	    for (;startx<=endx;startx++)
	    {
	    	for (;starty<=endy;starty++)
		    {
		    	printf(" %d ",given[startx][starty]);
		    	if(given[startx][starty] == 0) zeronum+=1;
		    	if(given[startx][starty] == 1) onenum+=1;
	    	}
		    printf("\n");
		    if (position==1) starty=start_pinaka;
	        if (position==2) starty=half_pinaka+1;
	        if (position==3) starty=start_pinaka;
	        if (position==4) starty=half_pinaka+1;
	        
		
		
		
		
    	}
    	if (zeronum>onenum) printf("num > 0\n");
        else if(onenum>zeronum) printf("num > 1\n");
        zeronum=0;
        onenum=0;
}
	    
	}
	