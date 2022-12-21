#include <stdio.h>
#include <stdlib.h>
int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
int main(int argc, char* argv[])
{
    //int t;
    //scanf("%d",&t);

    //while(t--){
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

    qsort (ara, sizeof(ara)/sizeof(*ara), sizeof(*ara), comp);


  //  }

    return 0;
}
/*/
#include<stdio.h>

int main()

{
    long long t,temp=0,c=0;
    long long sum=0;
    scanf("%lld",&t);
    for(long long i=0;i<t;i++){
        long long n,x;
        scanf("%lld%lld",&n,&x);
        long long ara[n];

        for(long long i=0;i<n;i++)
        {

            scanf("%lld",&ara[i]);
        }
         for(long long i=0;i<n;i++){
            for(long long j=0;j<n;j++){
                if(ara[i]>ara[j]){

                    temp=ara[i];
                    ara[i]=ara[j];
                    ara[j]=temp;
                }
            }

        }
        for(int i=0;i<n;i++)printf("%d ",ara[i]);
        sum=ara[0];
       // printf("%d\n",sum);
       for(long long i=1;i<=n;i++){
        if((sum/i)<x){
                printf("%lld\n",i-1);
        break;
       }
       else {
        sum=sum+ara[i];
        c++;
       }

    }
   if(c==n) printf("%lld\n",c);
    c=0,sum=0;
    }




    return 0;
}
/*/
