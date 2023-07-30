#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,x1,x2;
    printf("enter the three number:");
    scanf("%f%f%f",&a,&b,&c);
    switch(d>0){
    d=sqrt(b*b-4*a*c);
case 1:
       x1=(-b+sqrt(d))/2*a;
       x2=(-b-sqrt(d))/2*a;
        printf(" the first root:%.2f\n",x1);
        printf("the second root :%.2f\n",x2);
        break;
   switch(d==0)
  case 0:
       x1=(-b+sqrt(d))/2*a;
       x2=(-b-sqrt(d))/2*a;
        printf(" the first root:%.2f\n",x1);
        printf("the second root :%.2f\n",x2);
        break;





default:
    printf("eror");
    break;
    }

}

