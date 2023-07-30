#include<stdio.h>
int main()
{

    float a,b,c,d,e,p,t;
    printf("enter the five number:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    t=(a+b+c+d+e);
    p=(t/500)*100;
    if(p>=90)
    {
        printf("grade A");
    }
    else if(p>=80)
    {
        printf("grade B");
    }
    else if(p>=70)
    {
        printf("grade C");
    }
    else if(p>=60)
    {
        printf("grade D");
    }
    else if(p>=40)
    {
        printf("grade E");
    }
    else
    {
        printf("grade F");
    }
    return 0;
}
