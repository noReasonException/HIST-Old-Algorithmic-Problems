#include <stdio.h>

int serialsearch(int len,int clude,int *array)
{
	int eye;
	for (eye=0;eye<len;eye++)
	{
		if (array[eye]==clude)
		{
			printf("%d at index %d\n",clude,eye);
			break;
		}
	}
}
int binarysearch(int len,int clude,int *array)
{
	len-=1;
	int apo,eos,mes,counter;
	for(apo=0,eos=len,counter=0;counter<=len;counter++)
	{
		mes=(apo+eos)/2;
		if (clude > array[mes]) apo=mes;
		else if(clude < array[mes]) eos=mes;
		else {
			printf("%d at index %d\n",clude,mes);
			break;
		}
	}
}

int main(){
	int examplearray[10]={1,2,3,4,5,6,7,8,9,10};
	binarysearch(10,7,examplearray);
}
	
		
 
