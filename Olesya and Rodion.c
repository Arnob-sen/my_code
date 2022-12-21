#include<stdio.h>

int main()
{
    int n,t;

    scanf("%d%d",&n,&t);
    if(n==1){
        if(t==10)printf("-1\n");
        else{
            printf("%d",t);
        }
    }

    else{
            if(t==10){
                printf("%d",t);
                for(int i=3;i<=n;i++)
                    printf("0");
            }
            else{

            for(int i=1;i<=n;i++){
                printf("%d",t);
            }
            }

    }




    return 0;
}
