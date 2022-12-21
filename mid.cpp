#include<stdio.h>

int main()

{
    int t,temp=0,c=0;
    long long sum=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,x;
        scanf("%d%d",&n,&x);
        int ara[n];

        for(int i=0;i<n;i++)
        {

            scanf("%d",&ara[i]);
        }
             sort (ara.begin(),ara.end(),greater<int>());
        sum=ara[0];
       // printf("%d\n",sum);
       for(int i=1;i<=n;i++){
        if((sum/i)<x){
                printf("%d\n",i-1);
        break;
       }
       else {
        sum=sum+ara[i];
        c++;
       }

    }
   if(c==n) printf("%d\n",c);
    c=0,sum=0;
    }




    return 0;
}

