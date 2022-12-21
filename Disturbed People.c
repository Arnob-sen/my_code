#include<stdio.h>

int main()

{
    int n,c=0;

    scanf("%d",&n);

    int ara[n];

    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);

        //if(ara[i]==0 && ara[i-1]==1&&ara[i+1]==1 && ara[i+2==1])c++;


    }
    for(int i=1;i<=n;i++){
             if(ara[i]==0 && ara[i-1]==1&&ara[i+1]==1 && ara[i+2==1])c++;

             else if(ara[i]=0&&ara[i-1]==1&&ara[i+1]==1&&ara[i+2]==0)
                {c++;
        i++;
        }
    }
    printf("%d\n",c);


    return 0;
}
