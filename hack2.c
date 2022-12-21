#include <stdio.h>

int main()

{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(a>=b){
      int  d=a+b;
       int e=a-b;
        printf("%d\n%d\n",d,e);
    }
    else{
       int d=b+a;
       int e=b-a;
        printf("%d\n%d\n",d,e);
    }



    return 0;
}
