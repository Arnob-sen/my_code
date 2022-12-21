#include<stdio.h>

int main()

{
    int ara[3][3],sum=0;
    for(int i=0;i<3;i++){

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){

                    if(i==j){
                        sum=sum+ara[i][j];
                    }

            }
        }
    }
    printf("%d",sum);



    return 0;
}
