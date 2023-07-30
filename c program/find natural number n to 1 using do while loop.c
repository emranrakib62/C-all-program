
#include<stdio.h>
int main()
{

    int n,i;
    printf("enter the start number:");
    scanf("%d",&n);
    i=n;
    do{
        printf("%d\n",i,n);
        i--;
    }
        while(i>=1);

    return 0;
}
