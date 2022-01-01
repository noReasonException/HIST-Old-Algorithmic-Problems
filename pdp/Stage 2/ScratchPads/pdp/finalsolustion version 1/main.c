#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *in,*out;
    in=fopen("share.in","r");
    out=fopen("share.out","w");

    int days;
    fscanf(in,"%d",&days);
    int counter,array[days],a=0,b=0,c=0,sum=0;
    for(counter=1;counter <= days;counter++){
        fscanf(in,"%d",&array[counter]);
        sum+=array[counter];
    }
    printf("Sum > %d\n",sum);

    for(counter=1;counter<=days ;counter++){
        if (a > (int)((sum/3+1))) break;
        a+=array[counter];

    }

    sum-=a;
    sum+=sum-(int)((sum/3));

    for(;counter<=days ;counter++){
        if (b > (int)((sum/3+1))) break;
        b+=array[counter];

    }

    for(;counter<=days ;counter++){
        c+=array[counter];

    }




    printf("1 >%d\n2 >%d\n3 >%d",a,b,c);
}

