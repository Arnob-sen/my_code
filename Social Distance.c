#include<stdio.h>

int main()

{
    int t,n,m;
    long long sum=0,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
    scanf("%d %d",&n,&m);

    int ara[n];


    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);


        sum+=ara[i];
    }
    k=2*sum;

    if(m%n==0 && sum<=m && ara[i]==ara[i+1])printf("YES\n");

   else if(k<=m)printf("YES\n");
    else printf("NO\n");


    //printf("%d\n",sum);
    sum=0;

    }


    return 0;
}
