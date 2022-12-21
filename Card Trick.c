#include<stdio.h>

int main()
{
    int t,sum,max1;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int n,m;

        scanf("%d",&n);

        int ara[n];

        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
          scanf("%d",&m);
            int ara2[m];
                    for(int i=0;i<m;i++){

            scanf("%d",&ara2[i]);


        }
        sum=0;
         max1=ara[0];

        for(int i=1;i<n;i++){
            if(ara[i]>max1){
                max1=ara[i];
            }
        }

        for(i=0;i<m;i++){
            sum+=ara2[i];
        }

        printf("%d\n",sum);


    }



    return 0;
}
