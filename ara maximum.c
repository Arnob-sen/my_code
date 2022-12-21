#include<stdio.h>

int main()


{

    int n,ara[100];

    printf("number of element array have :");

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);
    }
            int max=ara[0];
            for(int i=1;i<n;i++){

                if(ara[i]>max){

                    max=ara[i];

                }
            }
            printf("maximum number is:%d",max);



    return 0;
}
