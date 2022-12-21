#include<stdio.h>
int main()
{
    int n,k,i,s=0;
     scanf("%d",&n);
     scanf("%d",&k);
    int ara[n];


    for(i=0;i<n;i++){

            scanf("%d",&ara[i]);






           // s++;

    }

    for(int j=0;j<n;j++){
        ara[j]>=ara[k-1];
        if(ara[j]>=ara[k-1] && ara[j]!=0)
        {


        s++;
        }
    }
    printf("%d",s);





    return 0;
}

