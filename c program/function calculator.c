//function calculator::
#include<stdio.h>
int sum(int x,int y){
 int sum= x+y;
return sum;
}
int substraction(int x,int y){

 int substraction= x-y;
return substraction;
}
int product(int x,int y){

 int product= x*y;
return product;
}
float division(float x,float y){

 float division= x/y;
return division;
}
int main()
{
    int x,y;
    printf("enter the two number:");
    scanf("%d%d",&x,&y);
   int result= sum(x,y);
   printf(" the sum is:%d\n",result);
   int a= substraction(x,y);
   printf(" the substraction is:%d\n",a);
   int b= product(x,y);
   printf(" the product is:%d\n",b);
   float c= division(x,y);
   printf(" the division is:%.2f\n",c);
    return 0;
}
