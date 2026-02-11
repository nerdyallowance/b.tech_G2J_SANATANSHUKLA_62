//pirgramus
#include <stdio.h>

int main(){
    float a,b,c;
    printf ("enter 3 distinct numbers: ");
    scanf ("%d%d", &a , &b , &c);
    if ( a>b ){
        if ( a>c ){
            printf ("first number is the largest %d", a);
        }
        else {
            printf ("third number is the largest %d", c);
        }
    }
    else{
        if (b>c){
            printf("second number is largest %d", b);
    
        }
        else{
            printf("third is largest %d");
        }
    }
    return 0;
}