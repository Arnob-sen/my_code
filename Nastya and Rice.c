#include<stdio.h>

int main()

{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){

        long long n,a,b,c,d;

        scanf("%lld %lld %lld %lld %lld",&n,&a,&b,&c,&d);

        for(long long i=a-b;i<=a+b;i++){
            if(n*i==c+d || c+d){
                printf("YES\n");
                break;
            }
            printf("%d \n",n*i,c+d);
            c++;
        }
        if(c==(a+b)-(a-b))printf("NO\n");
    }




    return 0;
}
