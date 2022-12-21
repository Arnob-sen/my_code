#include<stdio.h>

int main()

{

    int t;

    scanf("%d",&t);

    for(int i=0;i<t;i++){
        long long n,k;
        scanf("%lld%lld",&n,&k);
        if(n%2==0){
            printf("%lld\n",n+(k*2));
        }

        else{



            for(long long i=2;i<=n;i++){
                if(n%i==0){
                    n=n+i;
                    k--;
                    break;
                }
            }
            if(n%2==0)printf("%lld\n",n+(k*2));
                }

                        //printf("%lld\n",n);



        n=0;
    }


    return 0;





}
