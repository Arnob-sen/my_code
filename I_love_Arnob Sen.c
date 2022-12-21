#include<stdio.h>

int main()

{
    int n;
    scanf("%d",&n);

    int ara[n],c=0;
    for(int i=0;i<n;i++){
        //int c=0,//d=0;
        scanf("%d",&ara[i]);

    }
   int  max=ara[0];
   int  min=ara[0];

    for(int i=1;i<n;i++){

        if(ara[i]>max){
            c++;
            max=ara[i];

        }
        if(ara[i]<min){
            c++;
            min=ara[i];
        }
    }

    printf("%d\n",c);






    return 0;
}
