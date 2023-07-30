
#include<stdio.h>
void main()
{
   int n1,n2,num1,num2,r,gcd,lcm;
   printf("enter the two number:");
   scanf("%d%d",&n1,&n2);
   num1=n1;
   num2=n2;
   while(n2!=0){
        r=n1%n2;
   n1=n2;
   n2=r;
   }
    gcd=n1;
    lcm=num1*num2/gcd;


    printf("gcd=%d\n",gcd);

 printf("lcm=%d\n",lcm);

}
