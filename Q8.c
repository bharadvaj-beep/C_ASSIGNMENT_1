#include<stdio.h>
int main(){
    int time,a,b,c,d,e,f;
    printf("enter the value of time in second");
    scanf("%d",&time);
a=time/86400;// days
b=time%86400;
c=b/3600;//hours
d=b%3600;
e=d/60;//minutes
f=d%60;//seconds
printf("days=%d\nhours=%d\nminutes=%d\nseconds=%d",a,c,e,f);
return 0;
}
