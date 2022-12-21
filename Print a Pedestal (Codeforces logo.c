#include<stdio.h>


int main()

{
    long long t;

    scanf("%lld",&t);

    for(int i=0;i<t;i++){

        long long n;

        scanf("%lld",&n);

        if(n%3==0)printf("%lld %lld %lld\n",n/3,n/3+1,n/3-1);

        else if(n%3==1)printf("%lld %lld %lld\n",n/3,n/3+2,n/3-1);

        else if(n%3==2)printf("%lld %lld %lld\n",n/3+1,n/3+2,n/3-1);
    }




    return 0;
}
