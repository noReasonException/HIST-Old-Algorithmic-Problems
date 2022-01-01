#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main() {
    int j,i,n,inp;
    scanf("%d",&n);
    int array[1000][1000];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&inp);
            array[i][j]=inp;
            
        }
    }
    int rightdiagsum=0,leftdiagsum=0;
    for(i=0,j=n-1;i<n;i++,j--){
        rightdiagsum+=array[i][i];
        leftdiagsum+=array[i][j];

    }
    printf("%d",abs(rightdiagsum-leftdiagsum));
}