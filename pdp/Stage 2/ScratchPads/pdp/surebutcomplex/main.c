#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *in,*out;
    in=fopen("share.in","r");
    out=fopen("share.out","w");

    int days;
    fscanf(in,"%d",&days);
    int counter,counter02,array[days],sum[2]={0,0,0},sumall=0;
    for(counter=1;counter <= days;counter++){
        fscanf(in,"%d",&array[counter]);
        sumall+=array[counter];
    }
    printf("%d\n",sumall);
    counter=1,counter02=days;
    do{
        sum[0]+=array[counter];
        sum[2]+=array[counter02];
        counter++;
        counter02--;
    }while (sum[0] <= sumall/3 || sum[2] <= sumall/3);


    for(;counter<=counter02;counter++){
        sum[1]+=array[counter];
    }
    printf("%d %d %d ",sum[0],sum[1],sum[2]);

}
