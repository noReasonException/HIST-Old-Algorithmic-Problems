#include <stdio.h>

int main()
{
    int days;
    scanf("%d",&days);
    int counter;
    int array[days];
    int a=0,b=0,c=0;
    int sum=0;
    for(counter=1;counter <= days;counter++)scanf("%d",&array[counter]);
    int everypart = (int)days/3;
    int remain = days - (int)days/3;
    for(counter=1;counter<=days;counter++){
        if (counter<=everypart){
            a+=array[counter];
            continue;
        }

        else if ((counter>everypart) && (counter <= everypart*2)){
            b+=array[counter];
            continue;
        }
        c+=array[counter];
    }
    if (a>b && a>c)
    {
        for(counter=1;counter<=days;counter++)
        {
            sum+=array[counter];
            if (sum >= (int)days/3)
            {
                printf("%d",sum);
                break;
            }
        }
    }
    if (b>a && b>c){
        for(counter=everypart;counter<=days;counter++)
        {
            sum+=array[counter];
            if (sum >= (int)days/3)
            {
                printf("%d",sum);
                break;
            }
        }
    }

    else
    {
        for(counter=days;counter>=1;counter--)
        {
            sum+=array[counter];
            if (sum >= (int)days/3)
            {
                printf("%d",sum);
                break;
            }
        }
    }
}
