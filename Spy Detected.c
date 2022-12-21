#include<stdio.h>

int main()

{
    int t,c;
    scanf("%d",&t);

    for(int i=0;i<t;i++){

        int n;
        scanf("%d",&n);

        int ara[n];

        for(int i=0;i<n;i++){

            scanf("%d",&ara[i]);
        }




            int same=ara[0];

        for(int i=1;i<n;i++){


        if(same!=ara[i]  && ara[i]!=ara[i+1]){
            c=i+1;
            printf("%d\n",c);


            break;
        }

        if(same!=ara[i]&& ara[i]==ara[i+1]){
           printf("1\n");
           break;

        }
        }

          }



    return 0;
}
