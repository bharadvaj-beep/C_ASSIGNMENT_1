#include<stdio.h>
int main(){
    int a,b,x,c=0;
    printf("enter a number");
    scanf("%d",&a);
    x=a;
    while(a!=0){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if(c==x){
        printf("entered number is palindrome");
    }
    else{
        printf("entered number is not a palindrome");
    }
    return 0;
}