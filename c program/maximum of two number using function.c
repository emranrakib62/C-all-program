#include<stdio.h>
int max(int n1,int n2){
int result;
if(n1>n2){
    result=n1;
}
else{

    result = n2;

}
return result;
}
int main()
{
 int n1,n2;
 printf("enter the two number:");
 scanf("%d%d",&n1,&n2);
    int ret=max(n1,n2);
    printf(" the big number:%d",ret);

    return 0;
}
