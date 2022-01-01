#include <stdio.h>
#include <stdlib.h>

int main()
{

    int counter,days,sum=0;

    scanf("%d",&days);

    int array[10],guys[2]={0,0,0};

    for(counter=0;counter<days;counter++){

        scanf("%d",(array+counter));

        sum+=*(array+counter);
    }
    for(counter=0;counter<days;counter++)
    {
        guys[0]+=*(array+counter);

        if (guys[0] > (sum/3)+1)
        {
            printf("%d",guys[0]);

            break;
        }
    }
}


