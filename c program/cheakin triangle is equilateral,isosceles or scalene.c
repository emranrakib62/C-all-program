#include<stdio.h>
int main()
{
    int a ,b,c;
    printf("enter the three side:");
    scanf("%d%d%%d",&a,&b,&c);
    if(a==b&&b==c){
        printf("the triangle equilateral");
    }
    else if(a==b&& b!=c&& a!=c){
        printf("the triangle isosceles");
    }
        else if(a!=b&&b!=c){
            printf("the triangle is scalene");
        }

    return 0;
}
