#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the number :");
    scanf("%d",&n);
    if(n==0){
        printf("number is zero\n");

    }
    else if(n==1){
        printf("non prime\n");
    }
    else if(n==2)
    {
        printf("prime");
    }

            for(i=2;n>i;i++){
      if(n%i!=0){
        printf("prime number\n");
      }
      else if(n%i==0)
        {
             printf("not prime\n");

      }


            }











        return 0;
}

