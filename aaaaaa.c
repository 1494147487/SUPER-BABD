#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
srand(time(0));
int number=rand()%100;
int count=0;
int a=0;
printf("�������Ѿ������һ��0~99����,�ߺߣ��뽢���²¿���\n");
do
{
    scanf("%d",&a);
    count++;
    if (a<number)
    {
        printf("�µ���С����,�뽢��������\n");


    } else if (a>number)
    {
        printf("����,���ִ���,�뽢����С��Ŷ\n");
        
    }
    
} while (a!=number);
printf("��ϲ����ֻ����%d�ξͲ¶���,�治���ǽ�����!",count);
}
