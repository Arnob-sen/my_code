#include<stdio.h>
#include<math.h>


int main()

{
        int a,b,t,e;

        scanf("%d",&t);

        for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);

        int c=2*(a*b);


        for(int i=c;;i++){

            float d=sqrt(i);

            int n=d;
             e=i;

            if(n-d==0){
                break;
            }
        }
        printf("%d\n",e);




        }





}


