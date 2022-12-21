#include<stdio.h>

int main ()

{
    int n,ara[1000],sum=0;
    printf("how many element array have :\n");

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);
    }
    for(int i=0;i<n;i++)
    {

        sum=sum+ara[i];
    }

    printf("the sum is: %d\n",sum);
    printf("the average is :%.2f\n",(float)sum/n);









    return 0;
}
