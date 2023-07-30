#include<stdio.h>
int main()
{

    int n,i;
    printf("enter the start number:");
    scanf("%d",&n);
    i=n;
    while(i>=1){
        printf("%d\n",i,n);
        i--;
    }
    return 0;
}
