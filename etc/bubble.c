#include <stdio.h>

int bubblesort(int len,int *array)
{
	int count1,count2,swap;
	for(count1=0;count1<len;count1++)
	{
		for(count2=len-1;count2>count1;count2--)
		{
			if(array[count2] < array[count2 - 1]) 
			{
				swap=array[count2];
				array[count2]=array[count2 - 1];
				array[count2 - 1] = swap;
			}
		}
		
	}
	for(count1=0;count1<len;count1++) printf("%d\n",array[count1]);
	
}
int selectionsort(int len,int *array){
	int count1,count2,swap;
	int max,maxpos;
	for(count1=len-1;count1>0;count1--){
		max=0,maxpos=0;
		for(count2=0;count2<=count1;count2++){
			if(array[count2] > max) {
				max=array[count2];
				maxpos=count2;
			}
		}
		swap=array[count1];
		array[count1]=array[maxpos];
		array[maxpos]=swap;
	}
	for(count1=0;count1<len-1;count1++)printf("%d\n",*(array+count1));
	
	
}

void main()
{
	int x[10]={684,21,87,54,98,32,6,4,87,165};
	selectionsort(10,x);
}
	
