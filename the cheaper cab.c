#include<stdio.h>

int main()

{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){


        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b)printf("SECOND\n");

        else if(a<b)printf("FIRST\n");

        else
            printf("ANY\n");
    }


    return 0;
}