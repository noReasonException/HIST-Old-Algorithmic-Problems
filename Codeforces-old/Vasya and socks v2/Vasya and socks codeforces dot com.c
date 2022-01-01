#include <stdio.h>
int main()
{
    int socksnum,buyperday,dayscounter=0,daysout=0;
    scanf("%d %d",&socksnum,&buyperday);
    while(socksnum > 0)
    {
        ++dayscounter;
        if (dayscounter == buyperday)
        {
            ++socksnum;
            dayscounter = 0;
            
        }
        ++daysout;
        --socksnum;
        
    }
    printf("%d",daysout);
    return 0;
}