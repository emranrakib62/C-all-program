#include<stdio.h>
int main ()
{
    float p,t,r,c,s;
    printf("enter the three number :");
    scanf("%f%f%f",&p,&t,&r);
    c=p*((1+r/100)*t-1);
    s=p*t*r/100;
    printf("the compound interest is:%f\n",c);
    printf("the simple interest is:%f\n",s);
    return 0;
}
