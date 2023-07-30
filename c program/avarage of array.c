#include<stdio.h>
int main(){
int a[10],i,j,s=0,avg;
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
    printf("element[]=%d\n",a[i]);
    s=s+a[i];

}
printf("%d\n",s/10);


return 0;
}
