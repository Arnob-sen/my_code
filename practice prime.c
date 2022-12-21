#include<stdio.h>
#include<stdio.h>
void main()
{
    int  n,i,x,flag=0;
    printf("enter the number for checking :");
    scanf("%d",&n);
    x=sqrt(n);
    for(i=2;i<=x;i++)
    {
        if(n%i==0)
           {
               printf("number is not prime ");
               flag=1;
               break;

           }

    }
    if(flag==0)
    {

        printf("number is prime");
    }
    return 0;
}

