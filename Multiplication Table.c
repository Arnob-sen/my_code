#include<stdio.h>

int main()

{
    int n,same=0;
    long long x;

    scanf("%d",&n);

    scanf("%lld",&x);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

            long long d=i*j;

         //   printf("%d\n",d);

            if(d==x)same++;
        }
    }
    printf("%d\n",same);



    return 0;
}
