#include<stdio.h>

int main()
{
    long long t,a,b,n,s,d=0,c=0;

    scanf("%lld",&t);

    for(int i=0;i<t;i++){

        scanf("%lld %lld %lld %lld",&a,&b,&n,&s);

        if(s<a && s<b)printf("NO\n");

    if(s>a*n && s-a*n<=b)printf("YES\n");

    else if(s<=a*n){
        for(long long i=1 ;i<=a;i++){
            d=n*i;

            if(s-d<=b && s>=d)
            {

                printf("YES\n");
                break;
            }
            c++;
        }
        if(c==a)printf("NO\n");
    }
  //  else if(s<a && s<b)printf("NO\n");
  // else if(s==n*a)printf("YES\n");

            else{
                printf("NO\n");
            }

    }


    return 0;
}
