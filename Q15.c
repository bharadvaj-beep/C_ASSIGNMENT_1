#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5,sum=0;
    float percentage ;
    printf("enter the marks of 5 subjects");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    percentage=sum/5;
    if(percentage>=70){
        printf("first division");
    }
    else{ if(percentage>=60&&percentage<70){
        printf("second division");
    }
   else{ if(percentage>=50&&percentage<60){
        printf("third division");
    }
    else{
        printf("fail");
    }
}
    }
return 0;
}