#include<stdio.h>

int main()

{
    int n,q,x,y,temp=0,sum=0;

    scanf("%d%d",&n,&q);

    int ara[n];

    for(int i=0;i<n;i++)
        scanf("%d",&ara[i]);

        for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){
                if(ara[i]<ara[j]){
                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;

                }
            }
        }



    for(int i=0;i<q;i++){
            scanf("%d%d",&x,&y);
           int ara2[x];

            for(int i=0;i<x;i++){

                ara2[i]=ara[i];
            }
            for(int i=0;i<x;i++)printf("%d ",ara2[i]);
            for(int i=x-1;i<=y-1;i--){
                sum+=ara2[i];

            }
             printf("%d\n",sum);
                sum=0;



    }




    return 0;
}
