#include<stdio.h>

int main()

{
    long long n,c=0;
    scanf("%lld",&n);


    for(int i=0;n>0;i++)
   // while(n>=1)
   {
            if(n>=100 && n%100!=0){

              int  a=n/100;
                c+=a;

                 n=n%100;
                 continue;
            }
            else if(n>=100 && n%100==0){
                c=n/100;

                break;
            }


            else if(n>=20){

                int a=n/20;
                c+=a;
                 n=n%20;
                continue;
            }

            else if(n>=10){

                int a=n/10;
                c+=a;
                 n=n%10;
                 continue;


            }
            else if(n>=5){

                int a=n/5;
                c+=a;
                 n=n%5;
                 continue;


            }
            else{

                int a=n/1;
                c+=a;
                n=n%1;
                 continue;

            }


    }

    printf("%lld\n",c);



    return 0;
}
