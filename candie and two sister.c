#include<stdio.h>

int main()

{
    int t;
    scanf("%d",&t);

    long long n;

    for(int i=0;i<t;i++){

        scanf("%lld",&n);

        if(n%2==0){
            printf("%lld\n",(n/2)-1);
        }
        else{

            printf("%lld\n",n/2);
        }
    }





    return 0;
}
