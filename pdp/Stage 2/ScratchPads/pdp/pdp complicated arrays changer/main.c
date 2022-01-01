
int main()
{

    int counter,days;

    scanf("%d",&days);

    int array[days-1];
    int guys[2]={0,0,0};

    for(counter=0;counter<days;counter++){
        scanf("%d",&array[counter]);
    }
    int part = (int)days/3;
    for(counter=0;counter<days;counter++)
    {
        if(counter<=part)
        {
            guys[0]+=array[counter];
        }
        if(counter>part and counter<=part*2)
        {
            guys[1]+=array[counter];
        }
        if((counter>part*2) and (counter <= part*3))
        {
            guys[2]+=array[counter];
        }

    }
    if (days - (int)((days/3)*3) != 0)
    {
        for(counter = days;counter >=days-(days -(int)((days/3)*3));counter--)
            guys[2]+=array[counter];
    }

    for(counter=0;counter<2;counter++)
    {
        printf("%d",guys[counter]);
    }
}
