#include<stdio.h>

int main()

{
    int a,b,c,m,n;
        scanf("%d %d",&a,&b);

        c=0;

        m=a;

        while(m>=b){
            n=m/b;
            int i=m%b;
            c+=n;
            m=i+n;








        }


        printf("%d\n",c+a);



    return 0;
}
