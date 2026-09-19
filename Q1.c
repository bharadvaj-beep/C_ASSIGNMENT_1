#include<stdio.h>
int main(){
    int time,p,r;
    float si;
    printf("enter the original amount");
    scanf("%d",&p);
    printf("enter the time in years");
    scanf("%d",&time);
    printf("enter the rate of interest");
    scanf("%d",&r);
    si=(time*p*r)/100;
    printf("si=%f",si);
    return 0;
}