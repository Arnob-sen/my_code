#include<stdio.h>
#include<math.h>
int main ()
{       int t,i;
    long long n,s;
    scanf("%d",&t);
    for(i=0;i<t;i++){

        scanf("%lld %lld",&n,&s);
        printf("%lld\n",s/(n*n));
    }

    return 0;
}

