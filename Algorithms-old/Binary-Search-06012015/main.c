#include <stdio.h>

int main()
{
    int apo,eos,mes,cnt,find=2;
    int pin[10]={1,2,3,4,5,6,7,8,9,10};
    for(apo=0,eos=9,cnt=0;cnt<=9;cnt++)
    {
        mes=(apo+eos)/2;
        if (find > pin[mes]){
            apo=mes;
            
        }
        else if(find < pin[mes]){
            eos=mes;
        }
        else{
            printf("okp at %d",mes);
            break;
        }
    }
}

