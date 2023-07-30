#include<stdio.h>
int main()
{
    int x=20,y=85,z=78,*p1,*p2,*p3;

    p1=&x;
    p2=&y;
    p3=&z;
    if(*p1>*p2&&*p1>*p3){
        printf("the large number :%d",*p1);
    }

    else if(*p2>*p3&&*p2>*p1){
        printf("the large number :%d",*p2);
    }

     else{
        printf("the large number :%d",*p3);
    }




    return 0;
}
