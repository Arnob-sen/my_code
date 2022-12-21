#include<stdio.h>

int main()

{
    int t,c=0,max=0;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int ara[4];

        for(int i=0;i<4;i++)

        scanf("%d",&ara[i]);
        max=ara[0];

        for(int i=1;i<4;i++){
        if(ara[i]>max)c++;

        }
        printf("%d\n",c);
        c=0;
        max=0;
    }


    return 0;
}
