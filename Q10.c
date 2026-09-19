#include<stdio.h>
int main(){
    int maths ,physics,chemistry,e;//where e is marks in entraance examination
    float cutoffmarks;
    printf("enter the marks");//maximum marks of maths ,physics,chemistry is 200 and e is 100
    scanf("%d%d%d%d",&maths,&physics,&chemistry,&e);
    cutoffmarks=maths/2+physics/2+chemistry/2+e;
   printf("cutoffmarks=%f",cutoffmarks);
   return 0;
}
