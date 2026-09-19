#include<stdio.h>
int main(){
    float e,c;
    printf("enter the value of temperature in fahrenheit");
    scanf("%f",&e);
    c=5.0/9.0*(e-32);
    printf("c=%f",c);
    return 0;
}