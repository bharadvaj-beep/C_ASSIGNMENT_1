#include<stdio.h>
int main(){
    char a;
    printf("enter the charater");
    scanf("%c",&a);
    printf("a=%d\n",a);
    if(a>64&&a<91){
        printf("entered chacater is capital");
    }
   else{ if(a>96&&a<123){
        printf("entered chacater is small case letter  ");
    }
    else {
        if(a>47&&a<58){
            printf("entered chacater is number");
        }
        else {
            printf("entered chacater is special symbol");
        }
    }
}
return 0;
}