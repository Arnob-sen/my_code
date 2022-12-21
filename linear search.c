#include<stdio.h>

int main()

{
    int n,value,position=-1,ara[100];

    scanf("%d",&n);
    scanf("%d",&value);

    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);

        for(int i=0;i<n;i++){

            if(value==ara[i]){
                position=i+1;
                break;
            }
        }



    }

    if(position==-1){
        printf("not found");
    }

    else{
        printf("%d is the value and position is %d",value,position);

    }












    return 0;
}
