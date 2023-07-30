#include <stdio.h>
void a(){
    printf("Empty Return");
}
void b(int r){
    printf("Empty Return with Parameter/Argument %d\n\n", r);
}
int c(){
    return 20;
}
int d(int y){
    return y*y;
}

int main(){
    b(10);
    printf("Integer return without argument %d\n",c());
    printf("Integer return with argument %d\n", d(c()));
    return 0;
}
