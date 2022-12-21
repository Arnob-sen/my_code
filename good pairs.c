#include<stdio.h>
#include<math.h>
int main()
{
    long long n,sum,x,s;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lld %lld", &n,&s);
         x=n*n;

        sum=s/x;
        printf("%lld\n",sum);







    }
            return 0;

}
