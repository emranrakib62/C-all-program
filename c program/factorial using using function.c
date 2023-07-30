#include<stdio.h>
int fact(int i){
if(i<=1){
    return 1;
}
return i*fact(i-1);

}

int main()
{
int i;
scanf("%d",&i);
    printf("%d\n",fact(i));

    return 0;
}
