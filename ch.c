
#include <stdio.h>
int main()

{


        int t,c=0;
        scanf("%d",&t);

        for(int i=0;i<t;i++){

            int a,b;

            scanf("%d %d",&a,&b);

            if(a==b)
                c++;
        }

    printf("%d",c);




}
