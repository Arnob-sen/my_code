#include<stdio.h>
int main()
{
    int n,X=0;
    char str[10];


    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%s",&str);

            if(str[1]=='+'){

            X=X+1;
            }
                else {
                    X=X-1;
                }

    }
    printf("%d",X);
    return 0;
}
