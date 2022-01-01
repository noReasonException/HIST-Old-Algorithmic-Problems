#include <stdio.h>
int main()

{
	FILE *in,*out;
	in = fopen("NS4.in","r");
	out = fopen("NS4.out","w");
	int words,length=0,counter01,counter02,counter03,count;
	fscanf(in,"%d",&words);
	words-=1;
	char list_uncrupt[words][50],list_encrupt[words][50];
	for (counter01=0;counter01<=words;counter01++) 
	{
		fscanf(in,"%s",list_uncrupt[counter01]);
	}
	for (counter01=0;counter01<=words;counter01++) 
	{
		length=0;
		count = 0;
		while (list_uncrupt[counter01][count] != '\0')
		{
			length+=1;
			count+=1;
		}
		for(counter02=0;counter02<=length;counter02++)
		{
			if(list_uncrupt[counter01][counter02] == 'L')
			{
				for(counter03=0;counter03<=length;counter03++)
				{
					if (list_uncrupt[counter01][counter03] == 'A') list_uncrupt[counter01][counter03]='4';
					if (list_uncrupt[counter01][counter03] == 'I') list_uncrupt[counter01][counter03]='1';
					if (list_uncrupt[counter01][counter03] == 'O') list_uncrupt[counter01][counter03]='0';
				}
				
				
				
			}
			
		}
		printf("%s\n",list_uncrupt[counter01]);
		

			
		
	}
	for (counter01=0;counter01<=words;counter01++)
	{
		fprintf(out,"%s\n",list_uncrupt[counter01]);
	}
	fclose(in);
	fclose(out);
	
	return 1;
	
}
	
	
