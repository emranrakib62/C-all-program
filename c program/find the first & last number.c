
#include<stdio.h>
void main()
{

    int last,n;
    printf("enter the number:");
    scanf("%d",&n);
    last=n%10;
   while(n>=10){
    n=n/10;
   }
   printf("the last:%d\n",last);
       printf("the first:%d\n",n);



}
