#include<stdio.h>
int main(){
    //condition?expression 1:expreesion 2
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
     printf("enter the value of b");
    scanf("%d",&b);
     printf("enter the value of c");
    scanf("%d",&c);
    a>b&&a>c?printf("a is greater"):printf(" ");
    b>a&&b>c?printf(" b is greater"):printf(" ");
    c>a&&c>b?printf("c is greater"):printf(" ");
    return 0;
}