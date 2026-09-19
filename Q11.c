#include<stdio.h>
int main(){
    int time,hours,minutes,seconds,a;
    printf("enter the time in seconds");
    scanf("%d",&time);
    hours=time/3600;
    a=time%3600;
    minutes=a/60;
    seconds=a%60;
printf("%dhours%dminutes%dseconds",hours,minutes,seconds);
return 0;
}