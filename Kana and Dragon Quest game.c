#include<stdio.h>

int main()

{
    long long t,d;

    long long c=0;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){

    long long x,n,m;

    scanf("%lld %lld %lld",&x,&n,&m);

        long long multi=m*10;
        if(multi>=x){printf("YES\n");

        continue;
        }

        if(x-multi>2){

             long long temp=x;


        for(int i=n;i>0;i--){

            d=temp/2+10;
            c+=temp-d;
            if(c<0)c=c*-1;
            temp=d;
         //   printf("%d %d %d\n",c,temp,d);

        }


       //printf("%d %d %d\n",x,c,c+multi);
        if(c+multi>=x)printf("YES\n");
        else
            printf("NO\n");
        }

        else printf("NO\n");

          c=0,d=0,x=0,m=0;
          continue;

    }







    return 0;
}
