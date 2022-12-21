#include<stdio.h>

int main()

{
    int t,d,e,c=-1;

    scanf("%d",&t);

    while(t--)
    {
        int a,b,x,y,n;

        scanf("%d%d%d%d%d",&a,&b,&x,&y,&n);

        for(int i=1;i<=n;i++){

            if(a<=b){


                for(int i=a;i>=x;i--){
                    d=i;
                    c++;
                }


            }
        }



    }



    return 0;
}
