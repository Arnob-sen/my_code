#include<stdio.h>
int main()

{
    int mat[30][40],n,m;
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            printf("mat[%d][%d] =",i,j);
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("it is %d*%d mattrix",n,m);




    getch();
}


