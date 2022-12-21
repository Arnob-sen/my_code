#include<stdio.h>
#include<math.h>

void solve1(int n)

{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)printf("* ");

         printf("\n");
    }

}
void solve2(int n)
{
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++)printf("* ",j);

        printf("\n");
    }

}
void solve3(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)printf("%d ",j%2);


        printf("\n");
    }

}
void solve4(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)printf("%d ",i%2);


        printf("\n");
    }

}
void solve5(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)printf("%c ",j+64);


        printf("\n");
    }

}
void solve6(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)printf("%c ",j+96);


        printf("\n");
    }

}
void solve7(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)printf("%c ",i+96);


        printf("\n");
    }

}
void solve8(int n)
{
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++)printf("%c ",i+65);

        printf("\n");
    }

}
void solve9(int n)
{
    for(int i=0;i<n;i++){
        for(int j=n;j>=i;j--)printf("%c ",j+65);

        printf("\n");
    }

}
void solve10(int n)
{
    int i,j,k;
    for( i=n-1;i>=1;i--){
        for( j=1;j<=i;j++)printf("* ");
        //for( k=1;k<=n-j;k++)printf("* ");

        printf("\n");
    }

}
void solve11(int n)
{
   int i,j;
    for( i=1;i<=n;i++){
        for( j=1;j<=n-i;j++)printf(" ");


        for( j=1;j<=i;j++)printf("* ",j);

        printf("\n");
    }
}
void solve12(int n)
{
   int i,j;
    for( i=n-1;i>=1;i--){
        for( j=1;j<=n-i;j++)printf(" ");


        for( j=1;j<=i;j++)printf("* ",j);

        printf("\n");
    }
}
void solve14(int a){

    a*=2;
    printf("%d\n",a);

}
int main()

{
    int n;
    scanf("%d",&n);


    solve14(n);

  // solve12(n);

}
