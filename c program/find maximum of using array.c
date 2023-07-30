#include<stdio.h>
int main()
{
   int  a[5]={45,69,32,12,89},i;
   int max=a[0];
   for(i=1;i<5;i++){
    if(a[i]>max)
        max=a[i];
   }
    printf("%d\n",max);



    return 0;
}
