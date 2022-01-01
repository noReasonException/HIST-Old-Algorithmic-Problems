#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main() {
    int c,j,i,rn,n,inp;
    scanf("%d",&n);
    rn=n*n;
    int array[2000];
    for(i=0;i<rn;i++){
        scanf("%d",&inp);
        array[i]=inp;
            
    }
    int rightdiagsum=0,leftdiagsum=0;
    rightdiagsum=array[0];
    for(i=0,c=0,j=0;i<rn;i++,j++,c++){
        if (j==n-1)leftdiagsum+=array[i] , j=0;
        if (c==n+1)rightdiagsum+=array[i] , c=0;
        

    }
    printf("%d",abs(rightdiagsum-leftdiagsum));
}