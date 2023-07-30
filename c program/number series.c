//c program to find sum of series 1/1!+2/2!+3/3!+.....n/n!



#include<stdio.h>
main()
{
    int fact=1,n,i;
    float s=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    fact=fact*i;
s=s+i*1.0/fact;

    }
    printf("the factor:%f",s);





}
