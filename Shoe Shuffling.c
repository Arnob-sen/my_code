#include<stdio.h>

int main()

{
    int t,equal=0,not_equal=0;

    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {

        int n;

        scanf("%d",&n);

        int ara[n],ara2[n];

        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        for(int i=0;i<n;i++){
            if(ara[i]<ara[i+1] || ara[i]>ara[i+1]){
               // printf("-1\n");
               // break;
              not_equal++;
            }
            else
                equal++;
        }



            if(equal==n-1)
            {

                ara2[0]=n;
                for(int i=1;i<n;i++){
                        ara2[i]=i;

                }
                for(int i=0;i<n;i++){
                    printf("%d ",ara2[i]);

                }

                printf("\n");



            }

            else
                printf("-1\n");

                equal=0;
                not_equal=0;

                continue;

    }




    return 0;
}
