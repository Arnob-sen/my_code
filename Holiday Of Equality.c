#include<stdio.h>


int main ()

{
    long long n,c=0;
    scanf("%lld",&n);

    long long ara[n];

    for(int i=0;i<n;i++){


        scanf("%lld",&ara[i]);




    }
    long long max=ara[0];
    for(int i=1;i<n;i++){
        if(max<ara[i]){
            max=ara[i];
        }
    }
    int i=0;

    for(int i=0;i<n;i++){
        c+=max-ara[i];
    }
    printf("%lld\n",c);


    return 0;
}
