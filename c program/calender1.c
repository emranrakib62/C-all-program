#include<stdio.h>
int getfirstdayoftheyear(int year){
int day =(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
return day;
}

int main(){
char *month[]={"january" ,"february" ,"march" ,"april" ,"may" ,"june" ,"july" ,"auguest" ,"september" ,"october" ,"november" ,"december"};
int daysinmonth[] = {31, 28, 31 ,30, 31, 30, 31, 31, 30, 31 ,30 ,31};
int i,j,totaldays,weekday=0,spacecounter=0,year;

printf("enter your favourite year:\n");
scanf("%d",&year);
printf("\n\n******Rakib**************welcome to %d******Rakib*************\n\n",year);


if((year%4==0&&year%100!=0)||(year%400==0)){
    daysinmonth[1] = 29;
}

weekday = getfirstdayoftheyear(year);
for(i=0;i<12;i++){
    printf("\n\n\n---------------------%s----------------------\n", month[i]);
    printf("\n    sun     mon      tue     wed     thu     fri    sat\n\n");
    for(spacecounter=1;spacecounter<=weekday;spacecounter++){
        printf("     ");
    }

    totaldays =daysinmonth[i];
    for(j=1;j<=totaldays;j++){
        printf(" %6d ", j );
        weekday++;
        if(weekday>6){
            weekday=0;
            printf("\n");
        }
    }
}

return 0;
}
