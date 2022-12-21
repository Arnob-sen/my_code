#include<stdio.h>

int main()

{
    int t;
    long long a,b,c,x,y,d,e;
    scanf("%d",&t);

    for(int i=0;i<t;i++){


        scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&x,&y);

        if(a<x && b>y){
            d=a+c;
            e=b;
            if(d>=x && e>=y){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        }
        else if(a>x && b<y){
            d=a;
            e=b+c;
            if(d>=x && e>=y){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        }

        else if(a<x&&b<y && c<x || c<y){
            printf("NO\n");

        }
        else if(a<x&&b<y&&c<x&&c>y){
            long long w=x-a;
            long long z=c-w;
            long long d=b+z;
            if(d>=y){
                printf("YES\n");

            }
            else{
                printf("no\n");
            }
        }
            else if(a<x&&b<y&&c>x&&c<y){
                    long long w=x-a;
            long long z=c-w;
            long long d=b+z;
            if(d>=y){
                printf("YES\n");

            }
            else{
                printf("no\n");
            }

            }





        else{
        d=a+c;
        e=b+c;
        if(d>=x && e>=y){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        }

    }



    return 0;
}
