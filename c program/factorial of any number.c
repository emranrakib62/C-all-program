#include<stdio.h>
main()
{
  int i,n,fact=1;
  printf("enter the number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    fact=fact*i;
  }
    printf("the factorial is:%d",fact);


}
