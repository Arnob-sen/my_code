#include<stdio.h>

int main()
{
    int t;

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
        int max1=ara[0];
        int max2=ara2[0];
        for(int i=1;i<n;i++){
            if(ara[i]>max1){
                max1=ara[i];
            }
        }

         for(int i=1;i<m;i++){
            if(ara2[i]>max2){
                max2=ara2[i];
            }
        }
        if(max1>max2){
            printf("Alice\nAlice\n");
        }
        else if(max2>max1){
            printf("Bob\nBob\n");
        }

        else if(max1==max2){
            printf("Alice\nBob\n");
        }

    }



    return 0;
}
