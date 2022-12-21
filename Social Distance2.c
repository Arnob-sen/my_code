#include<stdio.h>

int main()

{
    int t;
    long long sum=0,temp=0;

    scanf("%d",&t);

    for(int i=0;i<t;i++){

        int n,m;

        scanf("%d%d",&n,&m);

        int ara[n];

        for(int i=0;i<n;i++){

            scanf("%d",&ara[i]);

        }

         for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){
                if(ara[i]>ara[j]){
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;

                }
            }
        }


        sum=(ara[0]*2)+1;

        for(int i=1;i<n;i++){

            sum=ara[i]-ara[i-1]+1+ara[i]+sum;
        }
       printf("%d\n",sum);

        if(sum<=m)printf("YES\n");
        else printf("NO\n");
        sum=0,temp=0;
    }


    return 0;
}
