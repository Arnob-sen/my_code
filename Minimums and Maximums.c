#include<stdio.h>

int main()

{
    int t,n=0;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int a,b,c,d;

        scanf("%d %d %d %d",&a,&b,&c,&d);

        if(a==c){
            printf("%d\n",a);
        }

        else{
            for(int i=a;i<=b;i++){
                int m=i;

                if(m==c){
                    printf("%d\n",c);

                    break;
            }
            else {
                n++;

            }
            if(n>=(b-a)+1){
                printf("%d\n",a+c);
            }

        }
    }

    }



    return 0;
}
