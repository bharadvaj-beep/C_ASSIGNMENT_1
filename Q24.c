#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    float y;
    printf("enter the values of xand n");
    scanf("%d%d",&x,&n);
    if(n==1){
        y=1+x;
        printf("y=%f",y);
    }
    if(n==2){
        y=1+x/n;
        printf("y=%f",y);
    }
    if(n==3){
        y=1+pow(x,n);
        printf("y=%f",y);
    }
    if(n>3||n<1){
        y=1+n*x;
        printf("y=%f",y);
    }
    return 0;
}