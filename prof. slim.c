#include<stdio.h>

int main()


{
    int t, n,ara[1000],c=0;


    scanf("%d",&t);

    for(int i=0;i<t;i++){


             scanf("%d",&n);

        for(int i=0;i<n;i++){

            scanf("%d",&ara[i]);
        }

        int max=0;
        max=ara[0];
        for(int i=1;i<n;i++){


            if(max<ara[i]){
                c++;
                max=ara[i];
        }
        }



        if(c==n-1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }




    return 0;
}
