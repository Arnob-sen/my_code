#include<stdio.h>

int main()
{
    int n,ara[30],ara2[30];
    printf("element of array:");

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);

    }
    for(int i=0;i<n;i++){
        ara2[i]=ara[i];

    }
    for(int i=0;i<n;i++){

        //printf("%d\n",ara[i]);
        printf("\n%d\t",ara2[i]);
    }



    getch();
    return 0;
}
