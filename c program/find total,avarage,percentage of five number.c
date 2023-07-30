#include<stdio.h>
int main()
{
    float x,y,z,m,n,t,avg,p;
    printf("enter the five number:");
    scanf("%f%f%f%f%f",&x,&y,&z,&m,&n);
    t=x+y+z+m+n;
    avg=t/5;
    p=(t/500)*100;
    printf("the five number total:%f\n",t);
    printf("the five number avarage:%f\n",avg);
    printf("the percentage is:%f",p);
    return 0;





}
