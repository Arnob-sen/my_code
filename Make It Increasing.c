#include<stdio.h>

int main()

{
    int t,n,max=0,c=0;

    scanf("%d",&t);

    int ara[n];

    for(int i=0;i<t;i++){

        scanf("%d",&n);

        for(int i=0;i<n;i++){


            scanf("%d",&ara[i]);
        }



        for(int i=n-2;i>=0;i--){

            if(ara[i]>0 && ara[i]>=ara[i+1]){

                ara[i]=ara[i]/2;

                c++;


            }
        }

        for(int i=1;i<n;i++){

            if(ara[i]==ara[i-1]){
            c=-1;
            }
        }

        printf("%d\n",c);


    }






    return 0;
}
