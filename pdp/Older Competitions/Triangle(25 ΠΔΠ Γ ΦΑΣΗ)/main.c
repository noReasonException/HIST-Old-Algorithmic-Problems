#include <stdio.h>

int main()
{
    int size,i,j,line=0;
    FILE *in=fopen("tree.in","r");

    //fscanf(in,"%d",&size);
    size=5;
    size--;
    int array[size][size];


    for(i=0;i<=size;i++){
        for(j=0;j<=i;j++){
            fscanf(in,"%d",&array[i][j]);
        }
    }
    for(i=0;i<=size;i++){
        for(j=0;j<=i;j++){
            printf(" %d ",(array[i][j]));

        }
        printf("\n");
    }
    printf("\n\n");
    //PathTree
    for(i=1;i<=size;i++){
        for(j=0;j<=i;j++){
            if(j==0){
                array[i][j] = array[i][j] + array[i-1][j];
                continue;
            }
            else if (j==i){
                array[i][j] = array[i][j] + array[i-1][j-1];
                continue;
            }
            else{
                if(array[i][j]+array[i-1][j] > array[i][j]+array[i-1][j-1]){
                    array[i][j]=array[i][j]+array[i-1][j];

                }
                else{
                    array[i][j]=array[i][j]+array[i-1][j-1];
                }
            }

        }
    }
    for(i=0;i<=size;i++){
        for(j=0;j<=i;j++){
            printf(" %d ",(array[i][j]));

        }
        printf("\n");
    }
    int max=0;
    for(j=0;j<=size;j++){
        if (max<array[size][j]) max=array[size][j];
    }

    printf("\n\nThe MaxiMum Result is %d <3 <3 <3\n\n\n\n",max);
    return 0;
}
