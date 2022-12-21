#include<stdio.h>

int main()
{
    int n,m,s=10000;

    scanf("%d %d",&n,&m);

    int ara[m];

    for(int i=0;i<m;i++){
        scanf("%d",&ara[i]);
    }

        for(int j=0;j<m;j++){
            if(ara[j]>ara[j+1]){
                int t=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=t;


            }

        }

    for(int i=0;i<=m-n;i++){

        if(ara[i+n-1]-ara[i]<s){
            s=ara[i+n-1]-ara[i];
        }
    }
    printf("%d",s);


    return 0;
}
