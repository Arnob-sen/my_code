#include<stdio.h>
#include<math.h>

int main()
{
    int n,sum=1;

    scanf("%d",&n);


    if(n%4==1)printf("8\n");

    if(n==0)printf("1\n");

    else if(n%4==2)printf("4\n");

    else if(n%4==3)printf("2\n");

    else if(n%4==0)printf("6\n");





    return 0;
}
