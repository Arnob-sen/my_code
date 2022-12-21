#include <stdio.h>
int main()
{   double n;
    scanf("%lf",&n);
    if(n>0){
        printf("number is positive\n");

    }
    if(n<0){
        printf("number is negative\n");

    }
    else{
        printf("number is zero\n");
    }

    return 0;
}


