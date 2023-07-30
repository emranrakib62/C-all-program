#include<stdio.h>
main()
{
    int n,fact=1,i;
    float s=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
        s=s+(i*1.0)/fact;


    }
    printf("the sum is:%f",s);



}
