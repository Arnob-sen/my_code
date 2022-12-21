#include<stdio.h>

int main()

{
    int n;
    float sum=0;


    scanf("%d",&n);

    for(int i=n;i>0;i--){


        sum+=1/(float)i;

    }
    printf("%f",sum);



    return 0;
}
