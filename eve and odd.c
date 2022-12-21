#include<stdio.h>

int main()

{

    long long n,k;
    scanf("%lld",&n);
    scanf("%lld",&k);

    if(n%2==0 && k<=n/2){



            printf("%lld",(2*k)-1);
        }
        else if(n%2==0 && k>n/2){

            printf("%lld",2*(k-n/2));
        }
        else if(n%2!=0 && k<=(n/2+1)){

            printf("%lld",(2*k-1));
        }
        else if(n%2!=0 && k>(n/2+1)){
            printf("%lld",2*(k-(n/2+1)));
        }








    getch();
}




