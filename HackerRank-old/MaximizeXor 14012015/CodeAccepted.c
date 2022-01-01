#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int apo, int eos)
{
    int cnt,cnt2,max=0;
    for (cnt=apo;cnt<=eos;cnt++)
    {
        for (cnt2=apo;cnt2<=eos;cnt2++) if((cnt^cnt2)>=max) max=cnt^cnt2;  
    }
    return("%d",max);
}



int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}