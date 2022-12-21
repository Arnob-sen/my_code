#include<stdio.h>
int main()

{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){


        int x,n,m,c=1;

        scanf("%d %d %d",&x,&n,&m);

        int i=1;

        while(x>=20 &&  i<=n){

            x=x/2+10;
                i++;


        }
        x=x-(m*10);

        if(x<=0)printf("YES\n");

        else
            printf("NO\n");




    }





    return 0;
}
