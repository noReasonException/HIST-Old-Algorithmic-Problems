#include <stdio.h>

int main()
{
    int friends,pieces,step,counter=0;/*step = pieces*2;
*/ 
    scanf("%d %d",&friends,&pieces);
    step=2;
    while(pieces*step <= friends){
        step*=2;
        counter++;
    }
    printf("%d",counter);
}

