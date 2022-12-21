#include<stdio.h>

int main()
{
    long long n,m,d=0;

    scanf("%lld %lld",&n,&m);


        long long s=n;
   while(s>=m){
          d+=s/m;

        s=s/m+s%m;


   }
   printf("%lld\n",n+d);



    return 0;
}
