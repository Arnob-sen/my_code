#include<stdio.h>
#include <stdlib.h>
int main()

{
     int n,sum=0,d=0,c=0;

    scanf("%d",&n);
    int ara[n];

    for(int i=0;i<n;i++){


        scanf("%d",&ara[i]);
        sum=sum+ara[i];



    }
    qsort(a, n, sizeof(int), compare);

    int max=ara[0];
    int min=ara[0];

    for(int i=0;i<n;i++){
        if(ara[i]>=max){

            d+=ara[i];
            c++;

            if(d>sum/2){
                break;
            }
        }
        if(ara[i]<=min){

            d+=ara[i];
            c++;

              if(d>sum/2){
                break;
            }
        }

    }
    printf("%d\n",c);





    return 0;
}
