#include <stdio.h>  
int main()  
{  
    FILE *in,*out; 
    int datalen,count,child=1,max;
    in =fopen("xxx.in","r");  
    out = fopen("xxx.out","w"); 
    fscanf(in,"%d",&datalen);
    datalen-=1;
    int array[datalen];
    for(count=0;count<=datalen;count++)fscanf(in,"%d",(array+count));
    max=*(array+datalen);
    for(count=datalen;count>=0;count--){
		if(*(array+count) > max) child+=1,max=*(array+count);
	}
	
	fprintf(out,"%d",child);
	fclose(in);
	fclose(out);
	return(0);
    
    
}
