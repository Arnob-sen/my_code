#include<stdio.h>
int main()


{
    int t;

    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int n,m,k;

        scanf("%d%d%d",&n,&m,&k);

        if((n/k)>=m)printf("%d\n",m);

        else if((n/k)<m){
            int d=m-(n/k);

            if(d%(k-1)==0)printf("%d\n",(n/k)-(d/(k-1)));
            else printf("%d\n",(n/k)-((d/(k-1))+1));
        }
    }


    return 0;
}
