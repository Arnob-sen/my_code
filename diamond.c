#include <stdio.h>


int main()
    {


    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=i;k<n-1;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<n-1;i++){
        for(int k=n-2-i;k<n-1;k++){
            printf(" ");
        }
        for(int j=i;j<n-1;j++){
            printf("*");
        }
        for(int j=i+1;j<n-1;j++){
            printf("*");
        }

        printf("\n");

    }




    return 0;
}
