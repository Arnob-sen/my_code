#include<stdio.h>
int main()

{
    int n,ara[40];
    scanf("%d",&n);

    ara[0]=0;
    ara[1]=1;

    for(int i=2;i<n;i++){


        ara[i]=ara[i-1]+ara[i-2];




    }
    for(int i=0;i<n;i++){

        printf("%d\t",(long long)ara[i]);
    }






    return 0;
}
