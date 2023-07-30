#include<stdio.h>
int main()
{
  float x,y,*p1,*p2;
  p1=&x;
  p2=&y;
  scanf("%f%f",&*p1,&*p2);
  float sum=*p1+*p2;
  float minus=*p1-*p2;
  float into=(*p1)*(*p2);
  float division=(*p1)/(*p2);

printf("the sum= %f\n",sum);
printf("the minus= %f\n",minus);
printf("the into= %f\n",into);
printf("the division= %f\n",division);

    return 0;

}

