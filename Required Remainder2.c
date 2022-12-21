#include<stdio.h>

int main()


{
    int t,a,b,n;

    scanf("%d",&t);
    while(t--){

        scanf("%d %d %d",&a,&b,&n);

        int h=(n-b)/a;

        printf("%d\n",h*a+b);
    }



    return 0;
}
