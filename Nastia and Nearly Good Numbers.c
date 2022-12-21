#include<stdio.h>

int main()

{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){

            long long a,b;
        scanf("%lld %lld",&a,&b);
        if( b==1)printf("NO\n");

       // if(b==2)printf("YES\n%lld %lld %lld\n",a,a*b,a*3);


        else
        printf("YES\n%lld %lld %lld\n",a*1,a*b,a*(b+1));

    }




    return 0;
}
