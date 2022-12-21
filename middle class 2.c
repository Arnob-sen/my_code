#include<stdio.h>

int main()

{
    long long t,temp=0,c=0;
    long long sum=0;
    scanf("%lld",&t);
    for(long long i=0;i<t;i++){
        long long n,x;
        scanf("%lld%lld",&n,&x);
        long long ara[n];

        for(long long i=0;i<n;i++)
        {

            scanf("%lld",&ara[i]);
        }
         for(long long i=0;i<n;i++){
            for(long long j=0;j<n;j++){
                if(ara[i]>ara[j]){

                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }

        }
        sum=ara[0];
       // printf("%d\n",sum);
       for(long long i=1;i<=n;i++){
        if((sum/i)<x){
                printf("%lld\n",i-1);
        break;
       }
       else {
        sum=sum+ara[i];
        c++;
       }

    }
   if(c==n) printf("%lld\n",c);
    c=0,sum=0;
    }




    return 0;
}
