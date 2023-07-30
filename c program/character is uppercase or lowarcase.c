#include<stdio.h>
int main()
{
    char ch;
    printf("enter the chracter:");
    scanf("%c",&ch);
    if((ch>='a')&&(ch<='z')){
        printf("the chracter  is lowercase");
    } else if((ch>='A')&&ch<='Z'){
    printf("the chracter is uppercase");

    }
return 0;
}
