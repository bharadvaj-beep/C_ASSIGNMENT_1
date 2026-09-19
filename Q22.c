#include<stdio.h>
int main()
{
    int i,a,factorial=1;
    printf("enter the value of a");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
factorial=factorial*i;
    }
    printf("factorial=%d",factorial);
    return 0;
    
}