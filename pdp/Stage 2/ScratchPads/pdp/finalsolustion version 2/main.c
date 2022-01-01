#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *in,*out;
    in=fopen("test3.in","r");
    out=fopen("share.out","w");

    int days;
    fscanf(in,"%d",&days);
    int counter,array[days],a=0,b=0,c=0,sum=0;
    for(counter=1;counter <= days;counter++){
        fscanf(in,"%d",&array[counter]);
        sum+=array[counter];
    }
    int astart,aend,bstart,bend,cstart,cend;
    astart=1,cend=days;
    for(counter=1;counter<=days ;counter++){
        if (a > (int)((sum/3+1))) break;
        a+=array[counter];

    }
    aend=counter;
    bstart=aend+1;

    sum-=a;
    sum+=sum-(int)((sum/3));

    for(;counter<=days ;counter++){
        if (b > (int)((sum/3+1))) break;
        b+=array[counter];

    }
    bend=counter;
    cstart=b;

    for(;counter<=days ;counter++){
        c+=array[counter];

    }
    int inif=0;
    do{
        if (a+array[bstart]<b){
            a+=array[bstart];
            b-=array[bstart];
            bstart++;
            aend++;
            inif++;

        }
        if (b+array[aend]<a){
            a-=array[aend];
            b+=array[aend];
            bstart--;
            aend--;
            inif++;

        }
        if (b+array[cstart]<c){
            b+=array[cstart];
            c-=array[cstart];
            bend++;
            cstart++;
            inif++;

        }
        if (c+array[bend]<b){
            c+=array[bend];
            b-=array[bend];
            cstart--;
            bend--;
            inif++;

        }



    }while(inif != 0);


    int biggest;
    if (a>b && a > c) biggest = a;
    else if (b>a && b > c) biggest = b;
    else biggest = c;

    printf("%d",biggest);
}

