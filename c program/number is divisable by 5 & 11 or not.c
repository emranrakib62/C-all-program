#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
        if(n%5==0&&n%11==0)
    {
        printf("number is divaisable");
    }
    else
    {
        printf("not divisable");
    }
    return 0;
}
