#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cnt1,n;
    bool Alex_Opinion=false;
    //cnt1 --> M�������� �������
    //n --> ���������� ������
    //Alex_Opinion --> ��������� (����������_�����) (1=������ , 0=������)
    scanf("%d",&n); //�������� ������� ���������� ��� ������
    int pricearray[n],qualityarray[n]; // ������ ��� ������� �����,���������
    n-=1; // ���� ��� �� ������� �������� ��� �� ����� ��� �������� ����
    //��� ���� ��������� � for � ����� �� ������� �� �������� ����� �������
    for (cnt1=0;cnt1<=n;cnt1++)
    {
        scanf("%d %d",&pricearray[cnt1],&qualityarray[cnt1]);
    }
//�������� ������������� ����������� for � ����� �� ������� ���� ������� ���..
    for(cnt1=0;cnt1<=n;cnt1++){
        //�� � ���������� ������ .... ����
        if(pricearray[cnt1] < qualityarray[cnt1])
        {
            //� ��������� ������� ����
            Alex_Opinion=true;
            //��� ������������ � ������������ ����������
            break;
        }
    }
    //�� � ���������� ��� ����� ������ ���� �������� ("Happy Alex")
    if(Alex_Opinion==true)printf("Happy Alex");
    //������ �������� ("Poor Alex")
    else printf("Poor Alex");

}
