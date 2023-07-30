#include<stdio.h>
int main()
{
    int m,w,d;
    printf("enter the days:");
    scanf("%d",&d);
    m=d/30;
    w=d/7;
    printf("the month is:%.2d\n",m);
    printf("the week is:%.2d\n",w);
    printf("the days is:%.2d\n",d);

    return 0;
}
