#include<stdio.h>
int main(){
    char a;
    printf("enter a charcater");
    scanf("%c",&a);
    if(a>96&&a<123){
    printf("entered charcater is small case letter");}
else {
    printf("entered charcater is not a small case letter");
}
return 0;
}