#include<stdio.h>
void main()
{
  float a,b,c,d,e,x,p,t;
  printf("enter the five number:");
  scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
  t=(a+b+c+d+e);
  x=t/5;
  p=(t/500)*100;
  printf("total:%f\n",t);
  printf("avarage:%f\n",x);
  printf("percentage:%f\n",p);

  if(p>=90){
    printf("grade A");
  }
  else if(p>=80){
    printf("grade B");
  }
  else if(p>=70){
    printf("grade c");
  }
else if(p>=60){
    printf("grade d");
}
else if(p>=40){
    printf("grade E");
}
else if(p<40){
    printf("grade F");
}

}
