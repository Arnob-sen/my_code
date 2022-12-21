#include<stdio.h>

int main()

{
    int t,tem=0;

    scanf("%d",&t);

    for(int i=0;i<t;i++){

        int n;
        scanf("%d",&n);
        int ara[n],ara2[n];

        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);

        }
        for(int i=0;i<n;i++){


                ara2[i]=ara[i];

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ara[i]<ara[j]){
                    tem=ara[i];
                    ara[i]=ara[j];

                    ara[j]=tem;


                }
            }
        }

        if(n==1)printf("-1\n");
        continue;

        for(int i=0;i<n;i++){

         if(ara[i]==ara2[i]){
            ara[i]=ara2[i+1];
            ara[i+1]=ara2[i];
         }

         printf("%d ",ara[i]);
        }


        for(int i=0;i<n;i++){

                printf("%d ",ara[i]);
        }


    printf("\n");
    }



    return 0;
}
