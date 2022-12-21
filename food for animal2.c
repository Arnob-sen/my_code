#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    long long a,b,c,x,y,d,e;

    for(int i=0;i<t;i++){

        scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&x,&y);
        if(x>=a){
            d=x-a;
        }
        else{
            d=0;
        }

        if(y>=b){
            e=y-b;
        }
        else{
            e=0;
        }
        if(d+e<=c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

}

