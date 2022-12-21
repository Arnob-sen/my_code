#include<stdio.h>

int main()

{
    long long n,m,sum;
    scanf("%lld%lld",&n,&m);

    long long ara[m];
    for(int i=0;i<m;i++)
        scanf("%lld",&ara[i]);


        sum=ara[0]-1;
        for(int i=1;i<m;i++){

            if(ara[i]<ara[i-1])
                sum+=n-ara[i-1]+ara[i];

            else
                sum+=ara[i]-ara[i-1];
        }
        printf("%lld\n",sum);






    return 0;
}
