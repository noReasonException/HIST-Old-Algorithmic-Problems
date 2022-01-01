#include <stdio.h>
#include <stdlib.h>

unsigned long int array[100000000];
int main()
{
    FILE *in,*out;
    in=fopen("test5.in","r");
    out=fopen("share.out","w");
    unsigned long int days;
    fscanf(in,"%d",&days);
    unsigned long int counter,a=0,b=0,c=0,sum=0;
    for(counter=0;counter<=days-1;counter++){
        fscanf(in,"%ld",&array[counter]);
        sum+=array[counter];
    }


    for(counter=0;counter<=days-1;counter++){
        if (a > (int)((sum/3+1))) break;
        a+=array[counter];

    }
    int aend=counter-1;
    int bstart = aend+1;

    sum-=a;
    sum+=sum-(int)((sum/3));

    for(;counter<=days-1;counter++){
        if (b > (int)((sum/3+1))) break;
        b+=array[counter];

    }

    int bend=counter-1;
    int cstart=bend+1;


    for(;counter<=days-1;counter++){
        c+=array[counter];

    }
    while(1){
        if(b+array[aend]<a){
            a-=array[aend],b+=array[aend];
            aend--,bstart--;
            continue;
        }
        break;
    }


    while(1)
    {
        if(a+array[bstart]<b){
            b-=array[bstart],a+=array[bstart];
            aend++,bstart++;
            continue;

        }
        if(c+array[bend]<b){
            b-=array[bend],c+=array[bend];
            bend--,cstart--;
            continue;
        }
        break;
    }
    while(1){
        if(b+array[cstart]<c){
            c-=array[cstart],b+=array[cstart];
            cstart--,bend--;
            continue;

        }
        break;

    }
    printf("%ld %ld %ld",a,b,c);
    return(0);

}

