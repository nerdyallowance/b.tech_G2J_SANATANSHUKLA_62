#include <stdio.h>

int main(){
    int a;
    printf("enter your number:");
    scanf("%d",&a);
    if(a>0){
        printf("\nnumber is positive");

    }
    else if(a<0){
        printf("\nnumber is negative");
    }
    else{
        printf("number is zero");
    }
}