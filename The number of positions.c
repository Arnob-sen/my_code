#include<stdio.h>

int main()

{
    int n,a,b;

    scanf("%d %d %d",&n,&a,&b);

    int d=n-a;

        if(d>b)
            printf("%d\n",b+1);

        else
    printf("%d\n",n-a);


    return 0;
}
//Case-1: number of people standing in front can not be less than a so the number of positions left are n-a

//Case-2: Also number of people standing behind can not be greater than b so the number of positions left are b+1

//so we have to choose min(n-a,b+1) which will be equal to the number of positions satisfying both cases.

