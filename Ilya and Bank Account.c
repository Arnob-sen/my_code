#include<stdio.h>


int main()

{
    long long n;

    scanf("%lld",&n);

    if(n>=0){

        printf("%lld\n",n);
    }

    //else if (n>=-99 && n<=-1)
        else
        {


            long long c=n/10;

            long long d=n/100*10+n%10;
            if(c>=d){
        printf("%lld\n",c);
    }

   else{
        printf("%lld\n",d);
    }
    }

    /*/

        else{
            printf("%lld\n",n/10);
        }


/*/

    return 0;
}
