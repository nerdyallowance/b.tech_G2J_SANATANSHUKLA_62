#include <stdio.h>
#include <math.h>

int main(){
    int n,count=0,sum=0,r,n1;
    printf("enter a number:");
    scanf("%d",&n);
    n1=n;

    while(n>0){
        n=n/10;
        count++;
    }
    n=n1;
    printf("%d",count);

    while(n!=0){
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
    }
    printf("%d",sum);

    if(sum==n1){
        printf("number is armstrong");

    }
    else{
        printf("number is not armstrong");
    }
}