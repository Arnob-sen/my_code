#include<stdio.h>

int main()
{
    int matA[10][10],n,matB[10][10],C[10][10],m;
    printf("enter the row and col :");
    scanf("%d %d",&n,&m);
    printf("A\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("matA[%d][%d] = ",i,j);

            scanf("%d",&matA[i][j]);
        }
        printf("\n");
    }
     printf("B\n");

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
                printf("matB[%d][%d] = ",i,j);

            scanf("%d",&matB[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            C[i][j]=matA[i][j]+matB[i][j];
        }
    }

     printf("A\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            printf( "%d ",matA[i][j]);
        }
        printf("\n");
    }
    printf("\n");

     printf("B\n");

     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }
    printf("C\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }



    getch();
}
