#include<stdio.h>

int main(){



        long long t,n;

        scanf("%lld",&t);

        for(int i=0;i<t;i++){


            scanf("%lld",&n);
            if(n%2==0 && n!=2){
            if(n==4 || n==6)
                printf("1 1\n");

                else if(n%4==0 && n%6==0)
                    printf("%lld %lld\n",n/6,n/4);

                else if(n%4==0 && n%6!=0)
                    printf("%lld %lld\n",(n/6)+1,n/4);

                else if(n%4!=0 && n%6==0){
                    printf("%lld %lld\n",n/6,(n/4));
                }
                else if(n%4!=0 && n%6!=0)
                    printf("%lld %lld\n",n/6+1,(n/4));


            }

            else


                printf("-1\n");


// maximnum n/4 r cheye bsi kkno hbe na .jodi extra tire o thake taw deya jabe na.but minimum r ketra jodi n%6!=0 hy tkn ekta extra add kora jabe.karon er cheye chaila ekta barano jabe.total value 4X+6y=n/2 hoita hobe



        }






    return 0;
}
