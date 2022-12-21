#include<stdio.h>

int main()

{
    int t,a,b,n,m=0;
    scanf("%d",&t);

    for(int i=0;i<t;i++){


        scanf("%d %d %d",&a,&b,&n);


        for(int i=n;i>=0;i--){
                m=i;

            //int d=m%a;
            if( m%a==b){
                break;

            }
        }
        printf("%d\n",m);
    }



    return 0;

}
