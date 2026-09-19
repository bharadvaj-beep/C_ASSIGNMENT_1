#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c){
        printf("%d is greater",a);
    }
    if(b>c&&b>a){
        printf("%d is greater ",b);
    }
    if(c>b&&c>a){
        printf("%d is greater",c);
    }
    return 0;
}