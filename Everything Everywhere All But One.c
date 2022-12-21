#include<stdio.h>

int main()
{
    int t,c=0,n;

    float d;

    long long sum=0;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d",&n);
        int ara[1000];

        for(int i=0;i<n;i++){
            scanf("%d",&ara[i]);


        }
        for(int i=0;i<n;i++)
            sum+=ara[i];

        d=(double)sum/(double)n;
        for(int i=0;i<n;i++){

            if(d==(double)ara[i]){
                printf("YES\n");
            break;
            }
            else if(d!=(double)ara[i])
                c++;
        }
        if(c==n)
            printf("NO\n");

      //  printf("%f\n%d\n%d\n",d,sum,c);
            sum=0;
            d=0;
            c=0;
        continue;
    }


    return 0;
}
