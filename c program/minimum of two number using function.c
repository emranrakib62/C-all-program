#include<stdio.h>

int min(int n1,int n2){
int result;
if(n1<n2){
    result =n1;
}
else{
    result=n2;
}
return result;

}


int main(){
int n1=200;
int n2=500;


int ret=min(n1,n2);
printf("%d",ret);
}


