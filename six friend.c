#include<stdio.h>

int main()
{

    int t;

    scanf("%d",&t);

    for(int i=0;i<t;i++){

        int a,b;

        scanf("%d %d",&a,&b);

        if(a*3<=b*2)printf("%d\n",a*3);

        else{
            printf("%d\n",b*2);
        }
    }




    return 0;
}
