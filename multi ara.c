#include<stdio.h>
int main()
{
    int ara[2][3]={{1,2,4},{3,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",ara[i][j]);
        }
        printf("\n");
    }
    return 0;
}
