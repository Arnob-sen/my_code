#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,ara2[100],min=0;
    scanf("%d",&n);

    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
        if(ara[i]>ara[i+1]){
          min=ara[i+1];
          ara2[0]=min;

        }


    }
  //  for(int i=0;i<n;i++){

   // }
    for(int i=0;i<n;i++){

        printf("%d ",ara2[i]);
    }

    return 0;
}

