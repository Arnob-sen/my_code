#include<stdio.h>

int main()
{
    int t,x,y,a,b;
    scanf("%d",&t);

    for(int i=0;i<t;i++){

        scanf("%d %d",&x,&y);

        if(y%x!=0){
            printf("0 0\n");
        }
        else if(y%x==0){
            a=1;
            b=y/x;
            printf("%d %d\n",a,b);
        }
    }



    return 0;
}
