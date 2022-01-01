#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cnt1,flag=0,n,a,b;
    scanf("%d",&n);
    n-=1;

    for (cnt1=0;cnt1<=n;cnt1++)
    {
        scanf("%d %d",&a,&b);
        if(a < b)
        {
            flag=1;
        }
    }
    if(flag==1) printf("Happy Alex");
    else printf("Poor Alex");

}
