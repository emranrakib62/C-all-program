
#include<stdio.h>
void main()
{
int n;

printf("enter the n:");
scanf("%d",&n);
switch(n%2){
case 1 :
  printf("odd number",n);
break;
default :
    printf("even number",n);
break;
}
}
