#include<stdio.h>
int main(){
    int basic,hra,da,gs;
printf("enter the the basic salary:");
scanf("%d",&basic);
if(basic>=10000){
    hra=(basic*20/100);
    da=(basic*80/100);

    gs=basic+da+hra;
printf("gross salary is rs = %d\n",gs);

}
else if(basic>=20000){
    hra=(basic*25/100);
    da=(basic*90/100);

   gs=basic+da+hra;
printf("gross salary is rs =%d\n",gs);

}
else if(basic>=30000){
    hra=(basic*30/100);
    da=(basic*95/100);

    gs=basic+da+hra;
printf("gross salary is rs=%d\n",gs);

}

return 0;

}
