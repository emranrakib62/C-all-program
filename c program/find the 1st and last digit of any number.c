
#include<stdio.h>
int main()
{
 int n,last_digit;
 printf("enter the number:");
 scanf("%d",&n);
 last_digit=n%10;

 while(n>=10){
   n=n/10;
 }
printf("first digit: %d\n",n);
printf("last_digit: %d\n",last_digit);
return 0;
 }


