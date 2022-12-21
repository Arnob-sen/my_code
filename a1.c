#include<stdio.h>

int main()

{
    int n,c=0,d=1;
    scanf("%d",&n);

    int ara[n];

    for(int i=0;i<n;i++){

            scanf("%d",&ara[i]);
    }
    for(int i=0;i<n;i++){

            d=ara[i]*2;
            printf("%d\n",d);
        if(d>=ara[i+1]){
            c++;
            printf("%d %d\n",ara[i+1],c);
        }
            else
            c=0;

            d=1;
    }
    //printf("%d\n",c);




    return 0;
}



