#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        long long x,n;
        scanf("%lld%lld",&x,&n);
        long long d=x;

        for(long long i=1;i<=n;i++){
            if(d%2==0)d=d-i;
            else d=d+i;
        }
        printf("%lld\n",d);
        d=0;
    }


    return 0;
}
