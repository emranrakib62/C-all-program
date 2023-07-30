#include<stdio.h>
int main()
{
    float r,d,c,a;
    printf("enter the radius:");
    scanf("%f",&r);
    d=r/2;
    c=2*3.1416*r;
    a=3.1416*r*r;
    printf("the diameter is:%f\n",d);
    printf("the circumference is:%f\n",c);
    printf("the area is :%f\n",a);
    return 0;
}
