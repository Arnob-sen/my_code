#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,d,i;
      int sum=0;

    scanf("%d",&n);



    for(i=0;i<5;i++){

      d=n%10;
     sum=sum+d;
     n=n/10;




    }

    printf("%d",sum);
    return 0;
}
