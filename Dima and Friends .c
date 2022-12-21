#include<stdio.h>

int main()

{
    int n,c=0,d;
    long long sum=0;
        scanf("%d",&n);
    int ara[n];

    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);
        sum+=ara[i];
    }
    for(int i=1;i<=5;i++){
        d=(sum+i)%(n+1);

        if(d!=1)c++;//highest number of fingure tulta chay
    }

    printf("%d\n",c);






    return 0;
}
