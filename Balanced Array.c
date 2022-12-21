#include<stdio.h>

int main(){

    long long n,t,c,ara[1000],ara2[1000];

    scanf("%d",&t);
    for(int i=0;i<t;i++){

    scanf("%d",&n);

    c=n/2;

    if(c%2==0){
        for(int i=0;i<n;i++){
                long long m=i;
            if(m%2==0){


            ara[i]=m;



            continue;
            }


            else{
                ara2[i]=m;


                continue;
            }
        }

           printf("YES\n");

           for(int i=0;i<n;i++){
            printf("%d %d\n",ara[i],ara2[i]);
           }

    }



        else{
            printf("NO\n");
        }







    }








    return 0;
}
