#include<stdio.h>

int main()
{
    int t,n,sum,ara[20000];

    scanf("%d",&t);

    for(int i=0;i<t;i++){
             sum=0;
        scanf("%d",&n);


        scanf("%d",&ara[0]);

        if(n==1){
            printf("YES\n");
        }

        else{
        for(int i=1;i<n;i++){

            scanf("%d",&ara[i]);
                    sum=sum+ara[i]-ara[i-1];

        }






        if(sum<=(n+1)){
            printf("YES\n");
        }

        else{
            printf("NO\n");
        }

    }

    }
    return 0;
}
