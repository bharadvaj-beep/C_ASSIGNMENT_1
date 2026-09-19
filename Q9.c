#include<stdio.h>
int main(){
    int a,b,d,c;
    printf("enter the value of time in hours");
    scanf("%d",&a);
     printf("enter the value of time in minutes");
      scanf("%d",&b);
      printf("enter the value of time in seconds");
       scanf("%d",&c);
d=a*3600+b*60+c;
printf("d=%d",d);
return 0;
}