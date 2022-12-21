#include<stdio.h>
int main()
{

    int ara[10],i,s=0;

    for(i=0;i<10;i++){
        scanf("%d",&ara[i]);
        s=s+ara[i];
    }
    printf("%d",s);
}
