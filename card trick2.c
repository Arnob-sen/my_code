#include<stdio.h>

int main()
{
    int t,n,m;
    long long sum;

    scanf("%d",&t);

    for(int i=0;i<t;i++){


        scanf("%d",&n);

        int ara[n];
        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);


        }
        scanf("%d",&m);

        int ara2[m];

        for(int i=0;i<m;i++){

            scanf("%d",&ara2[i]);

            sum=0;



              sum=sum+ara2[i];


        }


        int d=sum%n;

        printf("%d\n",ara[d]);



    }
    return 0;

}

