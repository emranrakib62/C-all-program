#include<stdio.h>
void even_odd(int x){
if(x%2==0){
    printf("even\n");
}else{

printf("odd\n");

}

}
int main()
{
    int x;
    scanf("%d",&x);
 even_odd(x);


    return 0;
}
