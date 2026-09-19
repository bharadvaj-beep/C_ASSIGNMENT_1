#include<stdio.h>
#include<math.h>
int main(){
    int a,n,b,c,x,sum=0;
    printf("which digit number are you entering");
    scanf("%d",&b);
    printf("enter a number");
    scanf("%d",&a);
    x=a;
    while(a!=0){
        n=a%10;
       c= pow(n,b);
       printf("c=%d\n",c);
        sum =sum+c;
        a=a/10;
    }
    if(sum==x)
    {
        printf("entered number is armstrong");
    }
    else{
        printf("entered number is not a armstrong");
    }
    return 0;
}