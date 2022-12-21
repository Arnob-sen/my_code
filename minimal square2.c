#include<stdio.h>

#include<math.h>

int main()

{
    int t,a,b;

    scanf("%d",&t);


    for(int i=0;i<t;i++){

        scanf("%d %d",&a,&b);

        if(a>=b){
            int c= b*2;
            if(c>=a){
                printf("%d\n",c*c);
            }
            else{
                printf("%d\n",a*a);
            }
        }
        else{
                int c= a*2;
            if(c>=b){
                printf("%d\n",c*c);
            }
            else{
                printf("%d\n",b*b);
            }


        }
    }




    return 0;
}
