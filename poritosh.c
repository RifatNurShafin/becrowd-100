#include <stdio.h>
int greatfristdayofthayear(int year){
int day=(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400)) % 7;
return day;
}
int main() {
 char *month[]={"january","febury","march","april","may","jun","julay","aught","septembar","octbar","novembar","december"};
 int dayinmonth[]={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 int i,j,totalday, weekday=0,spececounter=0,year;
 printf("Enter tha favorit year:\n");
 scanf("%d",&year);
 printf("\n\n*************wellcom to year%d*******************\n\n",year);
 if(year % 4==0 && year % 100!=0||(year % 400==0)){
    dayinmonth[1]=29;

 }
 weekday=greatfristdayofthayear(year);
 for(i=0;i<12;i++){
    printf("\n\n\n---------------------%s-----------------------\n\n\n",month[i]);
    printf("\n   sun   mon   tue   wed   thu   fri   sat   \n\n\n");
     for(spececounter=1;spececounter<=weekday;spececounter++){
        printf("      ");
     }
    totalday = dayinmonth[i];
    for(j=1;j<=totalday;j++){
        printf("%6d",j++);
        weekday++;
        if(weekday>6){
            weekday=0;
            printf("\n");
        }
    }
 }
   return 0;
}