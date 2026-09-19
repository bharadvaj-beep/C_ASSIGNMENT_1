#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5,sum=0;
    float percentage;
    printf("enter marks of 5 subjects");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    printf("s1=%d\ns2=%d\ns3=%d\ns4=%d\ns5=%d\n",s1,s2,s3,s4,s5);
    sum=s1+s2+s3+s4+s5;
    printf("sum=%d\n",sum);
    percentage=sum/5;
    printf("percentage=%f",percentage);
return 0;
}