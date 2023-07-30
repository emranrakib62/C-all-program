
#include<stdio.h>
int main()
{
    int day,m,y;
    printf("enter the day:");
    scanf("%d",&day);
    y=day/365;
    m=day/30;
    day=day%30;
    printf("%d\n",y);
    printf("%d\n",m);
    printf("%d\n",day);




}
