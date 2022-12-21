#include<stdio.h>

int main()


{
    int ara[100],n,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);

        if(ara[i]==1){
            c++;
        }
    }


    if(c>=1){

        printf("HARD");
    }
    else{
        printf("EASY");
    }





    return 0;
}
