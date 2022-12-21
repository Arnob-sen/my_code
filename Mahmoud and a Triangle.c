#include<stdio.h>

int main()

{
    long long n,temp=0,max=0;
    scanf("%lld",&n);
    long long ara[n];

    for(long long i=0;i<n;i++){
        scanf("%lld",&ara[i]);
    }
    if(n>=45){
            printf("YES\n");
    return 0;}


    for(long long  i=0;i<n;i++){
        for(long long j=i+1;j<n;j++){
            if(ara[i]<ara[j]){
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }

    for(long long i=0;i<n;i++){
            if(ara[i]+ara[i+1]>ara[i+2] && ara[i+1]+ara[i+2]>ara[i] && ara[i]+ara[i+2]){printf("YES\n");
            return 0;

            }




    }
      printf("NO\n");




    return 0;

}
