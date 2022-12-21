#include<stdio.h>

int main()

{
    int n;
    long long sum;
        scanf("%d",&n);

        sum=n;
        if(n==1)printf("1\n");
        else{

        for(int i=n-2,j=2;i>=1;i--,j++){
            sum=((i*j)+1)+sum;
        }
        printf("%lld\n",sum+1);
        }



    return 0;
}
