
#include<stdio.h>
int main()
{
    int a,b,c,big,small;
    printf("enter three number:\n");
    scanf("%d%d%d",&a,&b,&c);

    big=(a>b&&a>c)?(a):(b>c)?(b):(c);
    printf("biggest is %d\n",big);

 small=(a<b&&a<c)?(a):(b<c)?(b):(c);
    printf("smallest is %d\n",small);


    return 0;
}
