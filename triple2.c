#include<stdio.h>

int main()

{
    int t,n,ara[10000];
    scanf("%d",&t);

    for(int i=0;i<t;i++){

        scanf("%d",&n);
        for(int i=0;i<n;i++){

        ara[i]=0;
        }
        int ans=-1;
        for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        ara[a]++;
        if(ara[a]>=3){
            ans=a;
        }

    }



    printf("%d\n",ans);



    }





    return 0;
}

