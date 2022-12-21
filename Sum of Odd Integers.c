#include<stdio.h>

int main()

{
    long long n,k,t,sum;
    scanf("%lld",&t);

    while(t--){

        scanf("%lld%lld",&n,&k);
        sum=k*k;
        if(n>=sum){

        if(n%2==0 && k%2==0)printf("YES\n");

      //  else if(k==1 && n%2!=0)printf("YES\n");

        else if(n%2!=0 && k%2!=0)printf("YES\n");
        else
            printf("NO\n");


    }
    else printf("NO\n");

    sum=0;

    }




    return 0;
}
