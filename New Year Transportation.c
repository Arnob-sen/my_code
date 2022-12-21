#include<stdio.h>

int main()

{
    long long n,m,c=0;

    scanf("%lld%lld",&n,&m);

    long long ara[n-1];

    for(long long i=0;i<n-1;i++){
        scanf("%lld",&ara[i]);
    }
    for(long long i=0;i<n-1;i+=ara[i]){

        if(ara[i]+1+i==m){printf("YES\n");
            break;

        }
        if(ara[i]+1+i>m){printf("NO\n");

        break;
        }






    }





    return 0;
}
