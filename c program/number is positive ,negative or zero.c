#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>0){
        printf("positive");
    }
    else if(0>n){
        printf("negative");

    }
    else {
        printf("zero");
    }

    }
