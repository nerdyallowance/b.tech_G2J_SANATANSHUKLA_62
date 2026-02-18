#include <stdio.h>"
#include <math.h>

int main(){
    float a,b,c,d;
    printf("ax^2 + bx + c = 0\n");
    printf("enter value of a:");
    scanf("%f",&a);
    printf("enter value of b\n:");
    scanf("%f",&b);
    printf("enter value of c\n:");
    scanf("%f",&c);
    d=pow(b,2)-4*a*c;
    if(d>0){
    printf("real and distinct roots");
    printf("root1=%f",(-b-sqrt(d))/2*a);
    printf("root2=%f",(-b+sqrt(d))/2*a);

    }
    else if(d==0){
    printf("real and equal roots");
    printf("root=%f",(-b)/2*a);
    }
    else if(d<0){
    printf("complex roots");
    printf("root1=%f",(-b)/2*a);
    printf("+ i%f",(sqrt(-d))/2*a);
    printf("root2=%f",(-b)/2*a);
    printf("- i%f",(sqrt(-d))/2*a);
    }
    return 0;

}