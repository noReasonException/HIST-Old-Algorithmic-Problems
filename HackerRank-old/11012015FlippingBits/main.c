#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num,arraysize;
    scanf("%d",&arraysize);
    unsigned int array[arraysize-1];
    int counter;
    for(counter=0;counter<=arraysize-1;counter++){
        scanf("%ld",(array + counter));
    }
    for(counter=0;counter<=arraysize-1;counter++){
        num = ~(*(array+counter));
        printf("%ld\n",num);
    
    }
    
}