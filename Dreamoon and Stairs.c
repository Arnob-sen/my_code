#include<stdio.h>

int main()

{
    int n,m,k;

    scanf("%d %d",&n,&m);
if(n%2==0)
     k=n/2;

     else
        k=n/2+1;

    if(n>=m){
    for(int i=k;i<=n;i++){
        if(i%m==0){
                printf("%d\n",i);
            break;
        }
    }

    }
    else
        printf("-1\n");




    return 0;
}
