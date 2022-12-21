#include<stdio.h>


int main()
{
    int t,min,c;
    long long n;

    scanf("%d",&t);

    for(int i=0;i<t;i++){


            scanf("%lld",&n);


            if(n>=10 && n<=99){

                printf("%d\n",n%10);
            }

            else{
                 min=n%10;
                while(n>0){

                    c =n%10;
                    n=n/10;




                    if(c<min){
                        min=c;
                    }


                }
                printf("%d\n",min);
            }











    }






    return 0;
}
