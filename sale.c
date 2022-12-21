#include<stdio.h>

int main()
{
    int n,m,tem;
        long long sum=0,c=0;
    scanf("%d %d",&n,&m);

    int ara[n],ara2[1000];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);




    }


    for(int i=0;i<n-1;i++){
         for(int j=0;j<n-1;j++){
            if(ara[j]>ara[j+1]){
            tem=ara[j];
            ara[j]=ara[j+1];
            ara[j+1]=tem;
        }

        }

}
            /*/

        if(ara[i]>ara[i+1]){
            tem=ara[i];
            ara[i]=ara[i+1];
            ara[i+1]=tem;
        }

    }
    /*/
    for(int i=0;i<n;i++){
        if(ara[i]<0){
            ara[i]=ara[i]*-1;

            ara2[i]=ara[i];
            c++;

            if(c==m)
                break;
        }
    }

    for(int i=0;i<c;i++)
        sum+=ara2[i];

    printf("%lld",sum);

    return 0;
}
