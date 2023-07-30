#include<stdio.h>
int main()
{
    float b,h,a;
    printf("enter the hight&base:");
    scanf("%f%f",&b,&h);
    a= 0.5*b*h;
    printf("the area of triangle :%.2f\n",a);
    return 0;
}
