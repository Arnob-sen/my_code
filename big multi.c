#include <stdio.h>
int main ()
{   double n;
    int i;
    scanf("%lf",&n);
    i=0;
    while(i<10){
        i=i+1;
    printf("%.0lf*%d=%.0lf\n",n,i,n*i);
    }
    return 0;


}


