#include<stdio.h>
int main()
{
    int i,sumeven=0,sumodd=0,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sumodd=sumodd+i;
    }
    printf("sumodd=%d\n",sumodd);
    for(i=2;i<=n;i=i+2){
        sumeven=sumeven+i;
    }
printf("sumeven=%d",sumeven);
return 0;
}