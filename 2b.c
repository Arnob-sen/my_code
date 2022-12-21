#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    while(t--){

        long long a,b;

        scanf("%lld%lld",&a,&b);

        printf("%lld\n",(a/10)*b);
    }



    return 0;
}
