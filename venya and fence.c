#include<stdio.h>

int main()

{
    int n,h, ara[1000],c=0;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++){


        scanf("%d",&ara[i]);

        if(ara[i]<=h){
            c++;
        }

        else{
            c=c+2;



        }

    }
    printf("%d",c);






    return 0;
}
