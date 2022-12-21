#include<stdio.h>

int main()

{
    int k,c=0,temp=0,sum=0;

    int ara[12];

    scanf("%d",&k);


    for(int i=0;i<12;i++){
        scanf("%d",&ara[i]);
    }
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(ara[i]>ara[j]){

                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    for(int i=0;i<12;i++){

        sum+=ara[i];
        c++;

        if(sum>=k)break;
    }
    if(k==0)printf("0\n");
    else if(c==12 && sum<k)printf("-1\n");

    else
    printf("%d\n",c);



    return 0;
}

