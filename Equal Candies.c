#include<stdio.h>

int main()

{
    long long t;
    scanf("%lld",&t);

    long long n;

    for(int i=0;i<t;i++){

        scanf("%lld",&n);

        long long ara[n],ara2[n];
        for(int i=0;i<n;i++){

            scanf("%lld",&ara[i]);
        }

        long long min=ara[0];

        for(int i=1;i<n;i++){
            if(ara[i]<min){
                min=ara[i];
            }
        }
        for(int i=0;i<n;i++){
            ara2[i]=ara[i]-min;
        }



        long long sum=0;

        for(int i=0;i<n;i++){
            sum=sum+ara2[i];
        }

        printf("%lld\n",sum);





    }




    return 0;
}
