#include <stdio.h>
int main()
{ int a ;
printf ("enter a \n");
scanf("%d",&a);
    if (a<0)
    {
    a=a*(-1);
    }
    printf("\n Asolute Value = %d",a);
    return 0;
}