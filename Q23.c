#include<stdio.h>
int main(){
    int a,n,i,answer=1;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter the value of n");//here n means power of a number
    scanf("%d",&n);
    for(i=0;i<n;i++){
        answer=a*answer;
    }
    printf("answer=%d",answer);
    return 0;
}