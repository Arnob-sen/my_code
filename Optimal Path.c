#include<stdio.h>

int main()

{
    int t,n,m;

    scanf("%d",&t);

    long long sum=0;

    while(t--){
        scanf("%d%d",&n,&m);

        for(int i=1;i<=m;i++){
            sum+=i;

        }
        for(int i=2;i<=n;i++){
            sum=(m*i)+sum;
        }
        printf("%lld\n",sum);
        sum=0;
    }




    return 0;
}
