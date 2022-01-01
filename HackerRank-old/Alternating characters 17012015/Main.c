#include <stdio.h>

int main()
{
    int cnt,cnt02,deletions=0,num;
    scanf("%d",&num);
    char given[99999];	
    for(cnt=0;cnt<=num-1;cnt++){
	scanf("%s",&given);
        for(cnt02=0;given[cnt02+1]!='\0';cnt02++){
            if(given[cnt02] == given[cnt02+1]){
                deletions+=1;
            }
            
        }
        printf("%d\n",deletions);
	deletions=0;
        
    }
}
