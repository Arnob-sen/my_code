#include<stdio.h>
#include<string.h>

int main()

{
    int t;

    scanf("%d",&t);

    for(int i=0;i<t;i++){

    char str[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                scanf(" %c",&str[i][j]);
            }
        }
        int row,col;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(str[i][j]=='#' && str[i-1][j+1]=='#' && str[i-1][j-1]=='#'){ // j index a ekta # and tar uporer row te 2 konay 2 ta # like:#   #
                                                                                                                                               // #
                    row=i;
                    col=j;
                }
            }


        }
        printf("%d %d\n",row+1,col+1);
        row=0,col=0;
    }

    return 0;



}
