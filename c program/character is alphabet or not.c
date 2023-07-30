#include<stdio.h>
int main()
{
    char ch;
    printf("enter the chracter :");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'|| ch>='A'&& ch<='Z'){
        printf("this is an alphabet");
    }
    else{
        printf("this is not alphabet ");
    }
    return 0;
}
