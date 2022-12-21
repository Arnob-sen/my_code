#include<stdio.h>

int main()
{
    long long n,x,same=0;

    scanf("%lld%lld",&n,&x);


        for(int i=1;i<=n;i++){
            if(x%i==0 && x/i<=n)same++;
        }
        printf("%lld\n",same);





    return 0;
}
//  It's easy to see that number x can appear in column i only once — in row x / i. For every column i, let's check that x divides i and x / i ≤ n. If all requirements are met, we'll update the answer.

