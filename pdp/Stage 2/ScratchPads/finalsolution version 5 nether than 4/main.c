#include <stdio.h>
#include <stdlib.h>

unsigned int array[100000000];
int main()
{
    FILE *in,*out;
    in=fopen("share.in","r");
    out=fopen("share.out","w");
    int days;
    fscanf(in,"%d",&days);
    unsigned int counter,a=0,b=0,c=0,sum=0;
    for(counter=0;counter<=days-1;counter++){
        fscanf(in,"%d",&array[counter]);
        sum+=array[counter];
    }


    for(counter=0;counter<=days-3;counter++){
        if (a>(sum/3+1)) break;
        a+=array[counter];

    }
    int aend=counter-1;
    int bstart = aend+1;

    sum-=a;

    for(;counter<=days-2;counter++){
        if (b>(sum/2+1)) break;
        b+=array[counter];

    }
    sum-=b;

    int bend=counter-1;
    int cstart=bend+1;


    for(;counter<=days-1;counter++){
        c+=array[counter];

    }
    if(a>b&&a>c){
        while(b+array[aend]<a){
            a-=array[aend],b+=array[aend];
            aend--,bstart--;
        }
    }


    else if(b>c&&b>a)
    {
        if(a>c){
            while(a+array[bstart]<b){
                b-=array[bstart],a+=array[bstart];
                aend++,bstart++;

            }
        }
        else{
            while(c+array[bend]<b){
                b-=array[bend],c+=array[bend];
                bend--,cstart--;
            }
        }
    }
    else{ // (c>b&&c>a)
        while(b+array[cstart]<c){
            c-=array[cstart],b+=array[cstart];
            cstart++,bend++;
            continue;

        }
    }
    int biggest;
    if (a>b&&a>c) biggest = a;
    else if (b>a&&b>c) biggest = b;
    else if (c>a&&c>b) biggest = c;
    else if (a==b) biggest=a;
    else if (b==c) biggest=b;
    else if (c==a) biggest=c;


    printf("%d",biggest);
    return(0);

}

