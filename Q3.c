#include<stdio.h>
int main(){
    int bs,hra,oa,gross;
    printf("enter the basic salary");
    scanf("%d",&bs);
    printf("enter the hra");
    scanf("%d",&hra);
    printf("enter the other expensives");
    scanf("%d",&oa);
    gross=bs+hra+oa;
    printf("gross=%d",gross);
    return 0;
}