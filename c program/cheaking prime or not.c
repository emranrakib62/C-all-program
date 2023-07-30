#include<stdio.h>
int main()
{
int i,n;
printf("enter the number:");
scanf("%d",&n);
for(i=2;i<n;i++){

    if(n%i==0){
        printf("%d is not prime",n);
        break;
    }
}
if(i==n)
    printf("%d prime number",n);

return 0;

}
