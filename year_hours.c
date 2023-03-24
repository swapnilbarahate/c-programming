#include<stdio.h>
void countyears();
void countweek();
int main()
{
    int n;
    printf("Entert the hours:");
    scanf("%d",&n);
    countyears(n);
    countweek(n);
}
void countyears(int n){
    int hours=0,day=0,month=0,year=0,reminder=0;
    if(n<24)//hours
    {
        hours=n;
    }
    else if(n>=24 && n < (30*24))//day
    {
        day = n/24;
        hours= n%24;
    }
    else if(n>=(30*24) && n<(365*24))//month
    {
        month = n/(30*24);
        reminder= n%(30*24);
        day= reminder/24;
        hours= reminder%24;
    }
    else{
        year= n/(365*24);    //year
        reminder= n%(365*24);
        month = reminder/(30*24);
        reminder= reminder%(30*24);
        day= reminder/24;
        hours= reminder%24;
    }
    printf("Year:%d, Month:%d, Day:%d, Hours:%d",year,month,day,hours);
}
void countweek(int n){
    int hours=0,day=0,week=0,month=0,year=0,reminder=0;
  
    year= n/(365*24);
    reminder= n%(365*24);
    month = reminder/(30*24);
    reminder= reminder%(30*24);
    week = reminder/(7*24);
    reminder = reminder%(7*24);
    day= reminder/24;
    hours= reminder%24;
    printf("\nYear:%d, Month:%d,Week:%d, Day:%d, Hours:%d",year,month,week,day,hours);
}