#include<stdio.h>

int main()

{
    int n, sum=1,max=1;
    scanf("%d",&n);

    int ara[n];

    for(int i=0;i<n;i++){

    scanf("%d",&ara[i]);

    }
    for(int i=1;i<n;i++){


        if(ara[i]>=ara[i-1 ]){

            sum++;
        }
        else{
            sum=1;
        }

        if(sum>max)
            max=sum;
    }

    printf("%d\n",max);









    return 0;
}
