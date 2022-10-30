#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
srand(time(0));
int number=rand()%100;
int count=0;
int a=0;
printf("爱酱我已经想好了一个0~99的数,哼哼，请舰长猜猜看吧\n");
do
{
    scanf("%d",&a);
    count++;
    if (a<number)
    {
        printf("猜的数小了诶,请舰长再试试\n");


    } else if (a>number)
    {
        printf("不对,数字大了,请舰长往小猜哦\n");
        
    }
    
} while (a!=number);
printf("恭喜舰长只用了%d次就猜对了,真不愧是舰长呢!",count);
}
