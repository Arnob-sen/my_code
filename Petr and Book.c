#include<stdio.h>

int main()

{
    int n,sum=0,i;

    scanf("%d",&n);
    int ara[7];

    for( i=0;i<7;i++){
        scanf("%d",&ara[i]);
    }

    for(i=0; ;i++)
    {
        sum+=ara[i%7];

        if(sum>=n){

                printf("%d\n",i%7+1);

                break;




    }


        }





    return 0;
}
