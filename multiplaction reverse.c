#include <stdio.h>
int main ()
{
    int n,i;
    printf("enter the number :\t");
    scanf("%d",&n);
    i=10;
    while(i>=1){
        printf("%d*%d=%d\n",n,i,n*i);
        i--;
    }
    return 0;


}

