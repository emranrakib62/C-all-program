#include<stdio.h>
main(){
int n,s=1,r;
printf("enter the nuber:");
scanf("%d",&n);
while(n>0){

     r=n%10;
    n=n/10;
    s=s*r;
}

printf("%d",s);






}
