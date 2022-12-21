#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i;
    int flag =0;
    printf("enter the number :");
    scanf("%d",&n);
    x=sqrt(n);
    for(i=2;i<=x;i++){
        if(n%i==0){
            printf("not prime");
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("prime");
    }

    return 0;
}


