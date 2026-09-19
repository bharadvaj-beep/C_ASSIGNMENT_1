#include <stdio.h>
int main(){
    int a,b,c;
    char n;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    printf("enter the operant");
    scanf(" %c",&n);
    switch(n){
        case '+': c=a+b;
        break ;
        case '-': c=a-b ;
        break ;
        case '/':c=a/b ;
        break ;
        case '*':c=a*b ;
        break ;
        default :
        printf("invalid operator");
    }
    printf("%d",c);
    return 0;
}