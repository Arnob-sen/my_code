#include<stdio.h>

int main()
{
    long long t,a,b,n,s;
        scanf("%lld",&t);

        for(int i=0;i<t;i++){
    scanf("%lld %lld %lld %lld",&a,&b,&n,&s);


    if(s%n>b)printf("NO\n");

    else if((a*n)+b>=s)printf("YES\n");

    else{
        printf("NO\n");
    }


        }




    return 0;
}
