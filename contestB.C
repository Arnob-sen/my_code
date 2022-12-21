#include<stdio.h>

int main()

{





    int n,k;

    scanf("%d %d",&n,&k);
    if(n<=k) printf("2");
    else if(n>k)
    {
        int y=(2*n)/k;
        if((2*n)%k)
        {
          y+=1;
        }
        printf("%d\n",y);
    }









    return 0;
}
