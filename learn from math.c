#include<stdio.h>

int main()

{
    long long n;

    scanf("%lld",&n);

    if(n%2==0){
        printf("4 %lld",n-4);
    }
    else{
        printf("9 %lld",n-9);
    }



    return 0;
}
