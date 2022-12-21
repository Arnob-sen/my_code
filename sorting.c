#include<stdio.h>

int main()

{
    int n,tem=0;

    scanf("%d",&n);

    int ara[n];

    for(int i=0;i<n;i++){

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
    for(int i=0;i<n;i++){
        printf("%d ",ara[i]);
    }


    return 0;
}
