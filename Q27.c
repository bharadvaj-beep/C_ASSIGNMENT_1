#include<stdio.h>
int main(){
    int i,a;
    printf("enter a number");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            printf("entered number is not a prime");
            break ;
        }
    }
    if(a==i){
        printf("entered number is prime ");
    }
    return 0;
}