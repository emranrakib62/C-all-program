#include<stdio.h>
void main()
{

    int amount,note500,note200,note100,note50,note20,note10,note5,note2,coin1;

    note500=note200=note100=note50=note20=note10=note5=note2=coin1=0;
    printf("enter the amount:");
    scanf("%d",&amount);
 if(amount>=500){
        note500=amount/500;
        amount=amount-(note500*500);
    }

 if(amount>=200){
        note200=amount/200;
        amount=amount-(note200*200);
    }

  if(amount>=100){
        note100=amount/100;
        amount=amount-(note100*100);
    }



  if(amount>=500){
        note500=amount/500;
        amount=amount-(note500*500);
    }


  if(amount>=50){
        note50=amount/50;
        amount=amount-(note50*50);
    }

 else if(amount>=20){
        note20=amount/20;
        amount=amount-(note20*20);
    }

   if(amount>=10){
        note10=amount/500;
        amount=amount-(note10*10);
    }


if(amount>=2){
        note2=amount/2;
        amount=amount-(note2*2);
    } if(amount>=1){
    coin1=amount;

    }
   printf("500notes=%d\n",note500);
   printf("200notes=%d\n",note200);
   printf("100notes=%d\n",note100);
    printf("50notes=%d\n",note50);
    printf("20notes=%d\n",note20);
    printf("10notes=%d\n",note10);
    printf("2notes=%d\n",note2);
    printf("coin1=%d\n",coin1);
}

