#include<stdio.h>

int main()

{
    int ara[30][30],row,col,sum=0;
    scanf("%d %d",&row,&col);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

            scanf("%d",&ara[i][j]);
             if(i===j){
                sum=sum+ara[i][j];
            }

        }
    }
    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){

            printf("%d ",ara[i][j]);
        }
        printf("\n");
    }

    printf("%d ",sum);
}
