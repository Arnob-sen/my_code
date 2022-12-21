#include<stdio.h>

int main()
{
    int n,ara[100];
    printf("the number of element array have :");

    scanf("%d",&n);


    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);



    }
    int min=ara[0];
    for(int i=1;i<n;i++){

        if(min>ara[i]){

            min=ara[i];
        }
    }

    printf("min is :%d",min);




    return 0;
}
