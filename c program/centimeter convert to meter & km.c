#include<stdio.h>
int main()
{

    float c,m,k;
    printf("enter the centimeter:");
    scanf("%f",&c);
    m=c/100;
    k=c/100000;
    printf("the meter is:%.2f\n",m);
    printf("the kilometer is:%.3f\n",k);
    return 0;

}
